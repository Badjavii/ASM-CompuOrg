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

La **Unidad Aritmético-Lógica (ALU)** realiza operaciones aritméticas (como suma y resta) y lógicas (como AND, OR, NOT). La ALU contiene circuitos eléctricos específicos como sumadores, semisumadores y comparadores. 

#### Circuitos Sumadores 

Los sumadores son circuitos que realizan operaciones de suma. Existen dos tipos principales de sumadores: el **semi-sumador** y el **sumador completo**. 

**Semi-sumador**: 

<div style="text-align: center;"> 
    <!-- Aquí puedes insertar la imagen del circuito del sumador de medio -->
    <img src="/ruta/a/imagen/sumador-de-medio.jpg" alt="Sumador de Medio" style="width: 50%; height: auto;"> 
</div> 

<table> 
    <caption>Tabla de Karnaugh para Sumador de Medio</caption> 
    <tr> 
        <th>A</th> 
        <th>B</th> 
        <th>Suma (S)</th> 
        <th>Carry (C)</th> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
    </tr> 
</table> 

**Sumador Completo**: 

<div style="text-align: center;"> 
    <!-- Aquí puedes insertar la imagen del circuito del sumador completo -->
    <img src="/ruta/a/imagen/sumador-completo.jpg" alt="Sumador Completo" style="width: 50%; height: auto;"> 
</div> 

<table> 
    <caption>Tabla de Karnaugh para Sumador Completo</caption> 
    <tr> 
        <th>A</th> 
        <th>B</th> 
        <th>Cin</th> 
        <th>Suma (S)</th> 
        <th>Carry (Cout)</th> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>0</td> 
        <td>0</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
        <td>0</td> 
        <td>1</td> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>0</td> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>1</td> 
        <td>1</td> 
        <td>1</td> 
        <td>1</td> 
    </tr> 
</table> 

#### Circuitos Semisumadores

 Los semisumadores realizan operaciones de suma sin considerar el acarreo de entrada. Son la base para construir sumadores completos. 
 
 <div style="text-align: center;"> 
    <!-- Aquí puedes insertar la imagen del circuito del semisumador --> 
    <img src="/ruta/a/imagen/semisumador.jpg" alt="Semisumador" style="width: 50%; height: auto;"> 
</div> 

<table> 
    <caption>Tabla de Karnaugh para Semisumador</caption> 
    <tr> 
        <th>A</th> 
        <th>B</th> 
        <th>Suma (S)</th> 
        <th>Carry (C)</th> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>0</td> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
        <td>0</td> 
    </tr> 
    <tr> 
        <td>1</td> 
        <td>1</td> 
        <td>0</td> 
        <td>1</td> 
    </tr> 
</table>