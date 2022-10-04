
# BORN2BEROOT

Ubicacion del .vdi de la maquina: "/sgoinfre/goinfre/Perso/*login*"

### Instalacion de Sudo

- comando *su*, para pasar a ser root.
- comando *apt install sudo*
- reinicial maquina: *sudo reboot*
- para ver si se ha instalado correctamente podemos usar *sudo -V* que nos dara la version

### Crear y eliminar usuarios
- crear usuario: *sudo adduser [nombre_usuario]*
- eliminar usuario: *userdel [nombre_usuario]*
  
### Crear gurpos y añadir usuarios a grupos.
- crear grupos
	- sudo addgroup *[nombre_grupo]*
	- para ver que se ha creado podemos usar: getent group *[nombre_grupo]*, esto nos va a dar el ID del grupo.
- agregar usuario a un grupo
	- sudo adduser *[nombre_usuario]* *[nombre_grupo]*

### Instalar y configurar SSH
- Instalacion
	- Actualizaremos repositorios con *sudo apt update*
	- Instalaremos ssh con: *sudo apt install openssh-server*
	- ver estado de ssh con: *sudo service ssh status*
- Configuracion
	- Modificaremos un par de lineas del archivo /etc/ssh/sshd_config
		- Descomentar line *port* e indicarle el puerto que deseemos, en este caso el *4242*
		- Descomentar la linea *PermitRootLogin* y cambiar su contenido a *no*
	- Modificaremos una line del archivo /etc/ssh/ssh_config
		- Descomentamos la linea *Port* e igual que antes, introducimos el puerto deseado, *4242* en este caso.
	- Reiniciarremos ssh con *sudo service ssh restarrt*

### Instalar y configurar UFW
- Instalacion
	- instalamos con *sudo apt install ufw*
- Configurar
	- Habilitar ufw: sudo ufw enable
	- Habilitar puertos: *sudo ufw allow [Puerto]*
	- Deshabilitar puerto (esto para la evaluacion mayormente): *sudo del allow [Port]*
	- ver estado: *sudo ufw status*

### Politica de contraseñas fuertes
- modificar archivo /etc/login.defs
	- linea "PASS_MAX_DAYS" -> dias en los que expira la password (30)
	- linea "PASS_MIN_DAYS" -> dias minimos para cambiar la password (2)
	- linea "PASS_WARN_AGE" -> dias de antelacion para el mendaje de advertencia (7)
- instalar libpam pwquality
	- *sudo apt instal libpam-pwqualityl*
- modificar archivo /etc/libpam.d/common-password
	- agregar condiciones pedidas por el enuunciado, en este caso
		- **minlen=10** -> caracteres  minimos de la password.  
		- **ucredit=-1** -> minimo de caracteres en mayusculas, *-1* significa que como minimo debe haber 1
		- **dcredit=-1** -> minimo de digitos en la password.
		- **maxrepeat=3** -> cantidad maxima de veces que se puede repetir un caracter consecutivamente
		- **reject_username** -> No permite usar el nomnbre de usuario en la password 
		- **difok=7** -> diferencia de caracteres entre antugua password y nueva
		- **enforce_for_root** -> aplica estas reglas a la password del root
- Despues de esto deberemos cambiar las passwors de todos los usuarios de nuestra maquina, incluido el root.
	- con el comando *passwd* podremos hacerlo

### Contraseñas fuertes para sudo
- crear un archivo: /etc/sudoers.d/*[nombre_archivo]*
- crear un directorio /var/log/sudo
- modificar contenido del archivo creado hace un momento agregando lo siguiente:
	- *Defaults passwd_tries=3* -> limita a 3 intentos
	- *Defaults badpass_message="Te equivocaste de password amigo"* -> Mensaje personalizado al introducir password incorrecta
	- *Defaults logfile="/var/log/sudo-sudo_config"* -> archivo de logs
	- *Defaults log_input, log_ output* -> guarda logs tanto de input como de output de comanso ejecutados con sudo
	- *Defaults requiretty* -> inicia TTY
	- *Defaults secure_path* -> usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/bin/sbin:/snap/bin* -> rutas restringidas 

### Conectarse mediante ssh a la maquinita virtual
- Para ello necesitamos abrir el puerto 4242 en la maquina
	- en la configuracion de la maquina, en network, advanced, port fordwarding, creamos uno nuevo.
- desde la terminal del ordenador anfitrion (no la maquina) escribimos ssh *[nombre_usuario_de_la_maquina_virtual]*@localhost -p 4242
	- Pedira la password del usuario introducido y si todo ha ido bien, se conectara. (Si tratamos den entrar con root nos debe decir que nanai)
- ERROR DE SSH: En caso de que de un error por las clave ssh 
	- ir a la carpeta *.ssh* en la raiz de nuestro usuario, abrir el aerrchivo known host y eliminar las lineas que sean referentes a localhost.

### Script chulisimo que muestra informacion
Crear un script llamado monitoring.sh que muestre al ejecutarlo cierta informacion sobre el sistema a todos los usuarios conectados.  
Veamos por encima los comandos que vamos a usar para recopilar esa informacion.

- Arquitectura: uname -a
- nucleo fisico: grep "physical id" /proc/cpuinfo | wl -l
- nucleo virtual: grep "processor" /proc/cpuinfo | wl -l 
- Uso de ram:
	- Ram uso: free --mega | awk '$1 == "Mem:" {print $3}'
	- Ram total: free --mega | awk '$1 == "Mem:" {print $2}'
	- Ram Porcentaje: free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}'
 	- *A la hora de mostrarrlo escribiremos en formato [ram_uso]/[ram_total] ([ram_porcentaje])* ej: 4.5/500 (10%)
- Uso de disco
	- disktotal: df -m | grep "/dev/" | grep "/boot" -v | awk '{disk_t += $2} END {printf("%.1Gb\n"), disk_t/1024}' 
	- diskk_use: df -m | grep "/dev/" | grep "/boot" -v | awk '{disk_u += $3} END {print disk_u}'
	- disk_porcent: df -m | grep "/dev/" | grep "/boot" -v | awk '{disk_t += $2} {disk_u += $3} END {printf("%d"), disk_u/disk_t*100}'
	- *Para mostrarlo se usara el mismo formato que antes.*
- cpu
	- vm stat 1 4 | tail -1 | awk '{print $15}'
- ultimo inicio
	- who -b | awk '$1 == "system" {print $3 " " $4}'
- uso LVM
	- if [ $(lsblk | grep "lvm" |wp -l) -gt 0 ]: then echo yes: echo no: fi 
- conexion TCP
	- ss -ta | grep ESTAB | wc -l
- Numero Usuarios
	- users | wc -w
- ip y mac
	- ip: hostname -I
	- mac: ip link | grep "link/ether" | awk '{print $2}'
- Numero de comandos sudo
	- journalctl _COMM=sudo |grep COMMAND |wc -l
- Para mostrar toda esta info usaremos el comando wall (wall -n para ocultar el banner, esto es opcional.)
	- wall -n "todas las variablea calculadas anteriormente"
- ejemplo de script

'''
#!bin/bash

#ARCH
arch=$(uname -a)

#CPUP
cpup=$(grep "physical id" /proc/cpuinfo | wc -l)

#CPUV
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

#RAM
ramtotal=$(free --mega | awk '$1 == "Mem:" {print $2}')
ramusage=$(free --mega | awk '$1 == "Mem:" {print $3}')
ramperce=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

#DISK
disktotal=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf("%.1fGb\n"), disk_t/1024}')
diskusage=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
diskperce=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t += $2} END {printf("%d"), disk_u/disk_t*100}')

#CPU
cpul=$(vmstat 1 4 |tail -1 | awk '{print $15}')
cpu_op =$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" $cpu_op)

#LASTBOOT
lastb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

#LVM
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l ) -gt 0 ]; then echo yes; else echo no; fi)

#TCP
tcp=$(ss -ta | grep ESTAB |wc -l)

#USER
users=$(users | wc -w)

#NETWORK
ip=$(hostname -I)
mac=$(ip link |grep "link/ether" | awk '{print $2}')

#SUDO
sudo=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall -n "
        Architecture: $arch
        CPU Physical: $cpup
        vCPU: $cpuvy
        Ram Usage: $ramusage/$ramtotal ($ramperce%)
        Disk Usage: $diskusage/$disktotal ($diskperce%)
        Cpu load: $cpu_fin%
        Last Boot: $lastb
        LVM Use: $lvmu
	[...]
"
''''


### CRON

Un cron es un programita que ejecuta un script cada cierto tiempo establecido.
- con el comando sudo crontab -u root -e vamos a agregar una linea a un archivo.
	- en este caso se va a ejecutar cada 10 minutos, asi que pondremos: */10 * * * * /home/monitoring.sh
- para parar un cron y que deje de ejecutarse repetidas veces, usaremos el comando *sudo /etc/init.d/cron stop*
- para iniciarlo de nuevo, es igual pero start en lugar de stop
- estos dos ultimos apartados son muy utiles a la hotra de la evaluacion. 

### FIN DE LA PARTE OBLIGATORIA
