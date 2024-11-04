# Componentes del Computador

Virtualmente todos los computadores actuales se han desarrollado basándose en los conceptos desarrollados por John von Neumann en el Instituto de Estudios Avanzados de Priceton. Tal diseño se conoce con el nombre de *Arquitectura de von Neumannn* y se basa en tres conceptos clave:

- Los datos y las instrucciones se almacenan en una sola memoria de lectura-escritura.

- Los contenidos de esta memoria se direccionan indicando su posición, sin considerar el tipo de dato contenido en la misma.

- La ejecución se produce siguiendo una secuencia de instrucción tras instrucción (a no ser que dicha secuencia se modifique explícitamente).

## Componentes Principales 

### Unidad Central de Procesamiento (CPU)

La **Unidad Central de Procesamiento (CPU)** es el cerebro del computador. Se encarga de ejecutar las instrucciones de los programas y coordinar las actividades de todos los demás componentes del sistema. La CPU se compone de dos partes principales:

- **Unidad de Control (UC)**: Dirige el flujo de datos entra la CPU y otros dispositivos. Interpreta las instrucciones de los programas y genera señales de control para ejecutar esas instrucciones. La UC contiene varios registros generales y registros específicos que ayudan en la ejecución de las instrucciones.

- **Unidad Aritmético-Lógica (ALU)**: Realiza operaciones aritméticas (como suma y resta) y lógicas (como AND, OR, NOT).

> Se profundiza a detalle sobre el CPU en [Diseño interno del CPU](/S01-Computer-Organization/F01.1-Computer-Organization.es/D05-Unidad-Central-Procesamiento.md).

### Memoria Principal

La **Memoria Principal** es donde se almacenan temporalmente los datos y las instrucciones que la CPU necesita para ejecutar los programas. La memoria principal es volátil, lo que significa que pierde su contenido cuando se apaga el computador. 

<div style="text-align: center;">
    <img src="/sources/ImgCompuOrg/primary-memory.jpg" alt="This is an image" style="width: 50%; height: auto;"> 
</div>

### Dispositivos De Entrada/Salida (E/S)

Los **Dispositivos de Entrada/Salida (E/S)** permiten la comunicación entre el computador y el mundo exterior. Los dispositivos de entrada incluyen teclados, ratones y escáneres, mientras que los dispositivos de salida incluyen monitores, impresoras y altavoces.

<div style="text-align: center">
    <img src="/sources/ImgCompuOrg/input-output-devices.jpg" alt="This is an image" style="width: 50%; height: auto;">
</div>

### Memoria Secundaria 

La **Memoria Secundaria** proporciona almacenamiento a largo plazo para datos y programas. A diferencia de la memoria principal, la memoria secundaria es no volátil, lo que significa que retiene su contenido incluso cuando se apaga el computador. Ejemplos de memoria secundaria incluyen discos duros, unidades de estado sólido (SSD) y unidades de disco óptico.

<div style="text-align: center">
    <img src="/sources/ImgCompuOrg/secundary-memory.jpg" alt="This is an image" style="width: 50%; height: auto;">
</div>
