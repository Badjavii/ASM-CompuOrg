# Diseño Interno de la CPU

## Unidad de Control (UC)

La **Unidad de Control (UC)** dirige el flujo de datos entre la CPU y otros dispositivos. Interpreta las instrucciones de los programas y genera señales de control para ejecutar esas instrucciones. La UC contiene varios registros generales y registros específicos que ayudan en la ejecución de las instrucciones. 

## Unidad Aritmético-Lógica (ALU)

La **Unidad Aritmético-Lógica (ALU)** realiza operaciones aritméticas (como suma y resta) y lógicas (como AND, OR, NOT). La ALU contiene circuitos combinatorios para realizar dichas operaciones.

## Circuitos

 Los circuitos son conjuntos de componentes eléctricos y electrónicos interconectados que realizan funciones específicas. En el contexto de la computación, se dividen en dos categorías principales: circuitos combinacionales y circuitos secuenciales. 
 
 ### Tipos de Circuitos 
 
 Existen dos tipos de circuitos principales en la computación: 
 
 #### Combinacionales 
 
 Los **circuitos combinacionales** realizan operaciones lógicas y aritméticas sin depender de ciclos de reloj. Su salida depende únicamente de las entradas actuales en un momento dado. Algunos ejemplos de circuitos combinacionales incluyen sumadores, semisumadores y comparadores. 
 
 Estos circuitos se utilizan para realizar operaciones rápidas y directas que no requieren almacenamiento de estado. La lógica combinacional es la base para muchas operaciones aritméticas y lógicas en las unidades aritmético-lógicas (ALU) de las CPUs. 
 
 ##### Circuito Semisumador 
 
 Los **semisumadores** realizan operaciones de suma sin considerar el acarreo de entrada. Son la base para construir sumadores completos. 

<div style="text-align: center;"> 
    <!-- Aquí puedes insertar la imagen del circuito del semisumador --> <img src="/ruta/a/imagen/semi-sumador.png" alt="Semisumador" style="width: 50%; height: auto;"> 
</div> 
<table> 
    <caption>Tabla de Karnaugh para Semisumador</caption> 
    <tr> 
        <th>A</th> <th>B</th> <th>Suma (S)</th> <th>Carry (C)</th> 
    </tr> 
    <tr> 
        <td>0</td> <td>0</td> <td>0</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> <td>1</td> <td>1</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>0</td> <td>1</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>1</td> <td>0</td> <td>1</td> 
    </tr>
</table> 
 
 ##### Circuito Sumador 
 
 Completo El **sumador completo** es un circuito que realiza la suma de tres bits: dos bits de entrada y un bit de acarreo de entrada (Cin). 
 
 <div style="text-align: center;"> 
    <!-- Aquí puedes insertar la imagen del circuito del sumador completo --> 
    <img src="/sources/ImgCompuOrg/sumador.png" alt="Sumador Completo" style="width: 50%; height: auto;"> 
</div> 
<table> 
    <caption>Tabla de Karnaugh para Sumador Completo</caption> 
    <tr> 
        <th>A</th> <th>B</th> <th>Cin</th> <th>Suma (S)</th> <th>Carry (Cout)</th> 
    </tr> 
    <tr> 
        <td>0</td> <td>0</td> <td>0</td> <td>0</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> <td>1</td> <td>0</td> <td>1</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>0</td> <td>0</td> <td>1</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>1</td> <td>0</td> <td>0</td> <td>1</td> 
    </tr> 
    <tr> 
        <td>0</td> <td>0</td> <td>1</td> <td>1</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> <td>1</td> <td>1</td> <td>0</td> <td>1</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>0</td> <td>1</td> <td>0</td> <td>1</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>1</td> <td>1</td> <td>1</td> <td>1</td> 
    </tr> 
</table> 
 
##### Circuito Comparador 

Los **comparadores** determinan la relación entre dos valores, como igualdad, mayor que o menor que. 

<div style="text-align: center;"> 
    <!-- Aquí puedes insertar la imagen del circuito del comparador --> <img src="/sources/imgCompuOrg/comparador.jpg" alt="Comparador" style="width: 50%; height: auto;"> 
</div> 
<table> 
    <caption>Tabla de Karnaugh para Comparador</caption> 
    <tr> 
        <th>A</th> <th>B</th> <th>A = B</th> <th>A > B</th> <th>A < B</th> 
    </tr> 
    <tr> 
        <td>0</td> <td>0</td> <td>1</td> <td>0</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> <td>1</td> <td>0</td> <td>0</td> <td>1</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>0</td> <td>0</td> <td>1</td> <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> <td>1</td> <td>1</td> <td>0</td> <td>0</td> 
    </tr> 
</table> 

#### Secuenciales 

Los **circuitos secuenciales** dependen de los ciclos de reloj y pueden almacenar estados. Su funcionamiento se basa en flip-flops, y se utilizan en la construcción de contadores, registros y memoria. 

Estos circuitos se utilizan para operaciones que requieren una secuencia de pasos y almacenamiento de información a lo largo del tiempo. Por ejemplo, se utilizan en la gestión de ciclos de instrucciones en las CPUs y en la implementación de memoria temporal (latches y flip-flops) que conserva el estado entre ciclos de reloj. 

### Mapas de Karnaugh 

Los **mapas de Karnaugh** se utilizan para simplificar funciones booleanas. Son una herramienta visual que facilita la minimización de expresiones lógicas, reduciendo el número de términos y puertas lógicas necesarias en un circuito. Esto es especialmente útil en el diseño de circuitos combinacionales, donde la eficiencia y simplicidad son cruciales. El enfoque de los mapas de Karnaugh es agrupar términos adyacentes (minterms) que comparten variables comunes, permitiendo la cancelación de términos y simplificación de la expresión. Esto ayuda a crear circuitos más optimizados y eficientes. 

## Registros 

Los **registros** son pequeñas unidades de almacenamiento de alta velocidad dentro de la CPU que contienen datos temporales y son utilizados durante la ejecución de instrucciones. 

#### Tipos de Registros 

- **Registros de Propósito General**: Se suelen usar para almacenar datos temporales y operandos de las instrucciones. En este tipo tenemos registros como: 

    - **AX (Acumulador)**: Se utiliza para operaciones aritméticas y de entrada/salida. Es un registro de 16 bits que puede dividirse en dos registros de 8 bits, AH (alto) y AL (bajo). 
    
    - **BX (Base)**: Utilizado como base para direccionamiento de memoria. Es un registro de 16 bits que puede dividirse en BH y BL. 
    
    - **CX (Contador)**: Utilizado como contador en operaciones de bucles y repetición. Es un registro de 16 bits que puede dividirse en CH y CL. 
    
    - **DX (Datos)**: Utilizado para operaciones de entrada/salida y algunas operaciones aritméticas extendidas. Es un registro de 16 bits que puede dividirse en DH y DL. 
    
- **Registros de Propósito Específico**: 

    - **PC (Program Counter)**: Contiene la dirección de la siguiente instrucción a ejecutar. 

    - **IR (Instruction Register)**: Almacena la instrucción que se está ejecutando actualmente. 

    - **MAR (Memory Address Register)**: Contiene la dirección de memoria de la siguiente instrucción o dato que se va a leer o escribir. 
    
    - **MBR (Memory Buffer Register)**: Almacena temporalmente los datos que se están transfiriendo hacia y desde la memoria. 
    
### Camino de Datos de una Máquina von Neumann Típica 

En una máquina von Neumann típica, el camino de datos incluye varios componentes y buses que facilitan la transferencia de datos y la ejecución de instrucciones: