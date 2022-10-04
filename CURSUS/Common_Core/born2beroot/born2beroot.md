
# BORN2BEROOT

Ubicacion del .vdi de la maquina: "/sgoinfre/goinfre/Perso/*login*"

### Instalacion de Sudo

- comando *su*, para pasar a ser root.
- comando *apt install sudo*
- reinicial maquina: *sudo reboot*
- para ver si se ha instalado correctamente podemos usar *sudo -V* que nos dara la version
  
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
	-Modificaremos una line del archivo /etc/ssh/ssh_config
		- Descomentamos la linea *Port* e igual que antes, introducimos el puerto deseado, *4242* en este caso.
	- Reiniciarremos ssh con *sudo service ssh restarrt*

### Instalar y configurar UFW
- Instalacion
	- instalamos con *sudo apt install ufw*
-Configurar
	- Habilitar ufw: sudo ufw enable
	- Habilitar puertos: *sudo ufw allow [Puerto]*
	- Deshabilitar puerto (esto para la evaluacion mayormente): *sudo del allow [Port]*
	- ver estado: *sudo ufw status*

### Politica de contraseñas fuertes
- modificar archivo /etc/login.defs
	- linea "PASS_MAX_DAYS -> dias en los que expira la password (30)"
	- linea "PASS_MIN_DAYS -> dias minimos para cambiar la password (2)"
	- linea "PASS_WARN_AGE -> dias de antelacion para el mendaje de advertencia (7)"
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




 
