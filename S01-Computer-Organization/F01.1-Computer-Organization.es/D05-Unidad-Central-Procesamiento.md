# Diseño Interno de la CPU

## Unidad de Control (UC)

La **Unidad de Control (UC)** dirige el flujo de datos entre la CPU y otros dispositivos. Interpreta las instrucciones de los programas y genera señales de control para ejecutar esas instrucciones. La UC contiene varios registros generales y registros específicos que ayudan en la ejecución de las instrucciones. 

### Registros 

Los registros son pequeñas unidades de almacenamiento de alta velocidad dentro de la CPU que contienen datos temporales y son utilizados durante la ejecución de instrucciones. Algunos registros comunes incluyen: 

- **PC (Program Counter)**: Contiene la dirección de la siguiente instrucción a ejecutar. 
- **IR (Instruction Register)**: Almacena la instrucción que se está ejecutando actualmente. 
- **MAR (Memory Address Register)**: Contiene la dirección de memoria de la siguiente instrucción o dato que se va a leer o escribir. 
- **MBR (Memory Buffer Register)**: Almacena temporalmente los datos que se están transfiriendo hacia y desde la memoria. 

### Unidad Aritmético-Lógica (ALU)

La **Unidad Aritmético-Lógica (ALU)** realiza operaciones aritméticas (como suma y resta) y lógicas (como AND, OR, NOT). La ALU contiene circuitos eléctricos específicos como sumadores y comparadores.

#### Circuito Semisumador

Los **semisumadores** realizan operaciones de suma sin considerar el acarreo de entrada. Son la base para construir sumadores completos.

<div style="text-align: center;">
  <!-- Aquí puedes insertar la imagen del circuito del semisumador -->
  <img src="/ruta/a/imagen/semisumador.jpg" alt="Semisumador" style="width: 50%; height: auto;">
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

#### Circuito Sumador Completo

El **sumador completo** es un circuito que realiza la suma de tres bits: dos bits de entrada y un bit de acarreo de entrada (Cin).

<div style="text-align: center;">
  <!-- Aquí puedes insertar la imagen del circuito del sumador completo -->
  <img src="/ruta/a/imagen/sumador-completo.jpg" alt="Sumador Completo" style="width: 50%; height: auto;">
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

#### Circuito Comparador

Los **comparadores** determinan la relación entre dos valores, como igualdad, mayor que o menor que.

<div style="text-align: center;">
  <!-- Aquí puedes insertar la imagen del circuito del comparador -->
  <img src="/ruta/a/imagen/comparador.jpg" alt="Comparador" style="width: 50%; height: auto;">
</div>

<table>
  <caption>Tabla de Karnaugh para Comparador</caption>
  <tr>
    <th>A</th> <th>B</th> <th>A=B</th> <th>A>B</th> <th>A<B</th>
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

### Camino de Datos de una Máquina von Neumann Típica

En una máquina von Neumann típica, el camino de datos incluye varios componentes y buses que facilitan la transferencia de datos y la ejecución de instrucciones:

- **Registro de Salida de la ALU**: Almacena los resultados de las operaciones realizadas por la ALU.
- **Registro de Entrada de la ALU**: Almacena los operandos que se utilizarán en las operaciones de la ALU.
- **Bus de Entrada de la ALU**: Transporta los datos desde los registros hasta la ALU.
- **Registros**: Incluyen registros de propósito general y específicos que almacenan temporalmente datos y direcciones durante la ejecución de las instrucciones.

### Tipos de Registros

- **Registros de Propósito General**: Utilizados para almacenar datos temporales y operandos de las instrucciones.
