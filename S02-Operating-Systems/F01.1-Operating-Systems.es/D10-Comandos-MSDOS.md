# Interfaz de comandos MSDOS

MSDOS (Microsoft Disk Operating System) fue un sistema operativo diseñado por Bill Gates (utilizando una versión estándar de DOS) para IBM PC.

MSDOS se utiliza actualmente como la interfaz de comandos predeterminada de Windows. Se conoce mejor como `cmd`.

### Nota

Una interfaz de comandos funciona en segundo plano para dar soporte a las funciones de una interfaz gráfica de usuario. Su uso implica:

- Abrir una interfaz de comandos (como `cmd`).
- Identificar el objetivo (por ejemplo, navegar por directorios).
- Utilizar los comandos necesarios para completar el objetivo (cd).

## Guía de comandos MSDOS

Esta guía se basa en un documento PDF en línea que muestra cada comando y su uso. Los comandos están ordenados alfabéticamente.

- `ASSOC`: Muestra o modifica las asociaciones de extensiones de archivo.
- `AT`: Programa la ejecución de comandos y programas en un equipo. Esta función está obsoleta. Se recomienda usar schtask.exe.
- `ATTRIB`: Muestra o modifica los atributos de archivo.
- `BREAK`: Activa o desactiva la comprobación extendida de Ctrl+C en sistemas MS-DOS. Este comando ya no se utiliza. Se incluye para preservar la compatibilidad con archivos MS-DOS existentes, pero no afecta a la línea de comandos porque su funcionalidad es automática.
- `CALCS`: Muestra o modifica las listas de control de acceso a archivos (ACL).
- `CALL`: Llama a un programa por lotes desde otro.
- `CD`: Muestra el nombre del directorio actual o cambia a otro directorio.
- `CHCP`: Muestra o activa el número de página de códigos activo.
- `CHDIR`: Muestra el nombre del directorio actual o cambia a otro directorio.
- `CHKDSK`: Comprueba un disco y muestra un informe de su estado.
- `CHKNTFS`: Muestra o modifica la comprobación del disco al iniciar.
- `CLS`: Borra la pantalla. - `CMD`: Inicia una nueva instancia del intérprete de comandos de Windows.
- `COLOR`: Establece los colores predeterminados de primer plano y fondo de la consola.
- `COMP`: Compara el contenido de dos archivos o de un conjunto de archivos.
- `COMPACT`: Muestra o cambia el estado de compresión de los archivos en particiones NTFS.
- `CONVERT`: Convierte volúmenes FAT a volúmenes NTFS. No se puede convertir la unidad actual.
- `COPY`: Copia uno o más archivos a otra ubicación.
- `DATE`: Muestra o establece la fecha.
- `DEL`: Elimina uno o más archivos.
- `DIR`: Muestra una lista de archivos y subdirectorios en un directorio.
- `DISKPART`: Muestra o configura las propiedades de la partición del disco.
- `DISKCOMP`: Compara el contenido de dos disquetes.
- `DOSKEY`: Edita líneas de comandos, recupera comandos de Windows y crea macros. - `DRIVERQUERY`: Muestra el estado actual y las propiedades del controlador del dispositivo.
- `ECHO`: Muestra mensajes o activa y desactiva el eco.
- `ENDLOCAL`: Finaliza la búsqueda de variables de entorno del archivo por lotes.
- `ERASE`: Elimina uno o más archivos.
- `EXIT`: Sale del programa cmd.exe (intérprete de comandos).
- `FC`: Compara dos archivos o un conjunto de archivos y muestra las diferencias entre ellos.
- `FIND`: Busca una cadena de texto en uno o más archivos.
- `FINDSTR`: Busca cadenas de texto en archivos.
- `FOR`: Ejecuta un comando para cada archivo de un conjunto de archivos.
- `FORMAT`: Formatea un disco para su uso con Windows.
- `FSUTIL`: Muestra o establece las propiedades del sistema de archivos.
- `FTYPE`: Muestra o modifica los tipos de archivo utilizados en las asociaciones de extensiones de archivo. - `GOTO`: Dirige al intérprete de comandos de Windows a una línea etiquetada.
- `GPRESULT`: Muestra información de la directiva de grupo por equipo o usuario.
- `GRAFTABLE`: Permite a Windows mostrar un conjunto de caracteres extendido en modo gráfico.
- `HELP`: Proporciona información de ayuda para los comandos de Windows.
- `ICACLS`: Muestra, modifica, realiza copias de seguridad o restaura listas de control de acceso (ACL) para archivos y directorios.
- `IF`: Ejecuta procesos condicionales en programas por lotes.
- `LABEL`: Crea, cambia o elimina la etiqueta de volumen de un disco.
- `MD`: Crea un directorio.
- `MKDIR`: Crea un directorio.
- `MKLINK`: Crea enlaces simbólicos y enlaces físicos.
- `MODE`: Configura un dispositivo del sistema.
- `MORE`: Muestra información pantalla por pantalla.
- `MOVE`: Mueve uno o más archivos de un directorio a otro. - `OPENFILES`: Muestra los archivos compartidos abiertos por usuarios remotos como recurso compartido.
- `PATH`: Muestra o establece una ruta de búsqueda para archivos ejecutables.
- `PAUSE`: Suspende el procesamiento de un archivo por lotes y muestra un mensaje.
- `POPD`: Restaura el valor anterior del directorio actual guardado en PUSHD.
- `PRINT`: Imprime un archivo de texto.
- `PROMPT`: Cambia el símbolo del sistema de Windows.
- `PUSHD`: Guarda el directorio actual y luego lo modifica.
- `RD`: Elimina un directorio.
- `RECOVER`: Recupera información legible de un disco dañado o defectuoso.
- `REM`: Registra comentarios (notas) en archivos por lotes o CONFIG.SYS.
- `REN`: Renombra uno o más archivos.
- `RENAME`: Renombra uno o más archivos.
- `REPLACE`: Reemplaza archivos.
- `RMDIR`: Elimina un directorio.
- `ROBOCOPY`: Utilidad avanzada para copiar archivos y árboles de directorios.
- `SC`: Muestra o configura servicios (procesos en segundo plano).
- `SCHTASKS`: Programa comandos y programas para ejecutar en un equipo.
- `SET`: Muestra, establece o borra (elimina) variables de entorno en Windows.
- `SETLOCAL`: Inicia la localización de cambios de entorno en un archivo por lotes.
- `SHIFT`: Cambia la posición de los parámetros reemplazables en los archivos por lotes.
- `SHUTDOWN`: Permite el apagado local o remoto de un equipo.
- `SORT`: Ordena la salida.
- `START`: Inicia otra ventana para ejecutar un programa o comando específico.
- `SUBST`: Asocia una ruta a una letra de unidad. 
- `SYSTEMINFO`: Muestra las propiedades y la configuración específicas del equipo.
- `TASKKILL`: Finaliza o interrumpe un proceso o aplicación en ejecución.
- `TASKLIST`: Muestra todas las tareas en ejecución, incluidos los servicios.
- `TIME`: Muestra o establece la hora del sistema.
- `TITLE`: Establece el título de la ventana para una sesión de cmd.exe.
- `TREE`: Muestra gráficamente la estructura de directorios de una unidad o ruta de acceso.
- `TYPE`: Muestra el contenido de uno o más archivos de texto (.bat, .txt, etc.).
- `SEE`: Muestra la versión de Windows.
- `VERIFY`: Indica a Windows si debe verificar que los archivos se escriban correctamente en un disco.
- `VOL`: Muestra la etiqueta del volumen y el número de serie del disco.
- `WMIC`: Muestra información de WMI en la consola de comandos interactiva.
- `XCOPY`: Copia archivos y árboles de directorios.