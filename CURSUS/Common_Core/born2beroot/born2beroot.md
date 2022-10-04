
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

