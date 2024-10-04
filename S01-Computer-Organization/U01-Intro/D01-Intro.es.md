# Introducción a la Organización del Computador

## ¿Qué es un computador?

De forma filosófica, un computador es una extensión de la necesidad humana, especialmente del cerebro, para realizar operaciones lógicas y aritméticas. Las ventajas de un computador son su mayor eficiencia y la menor cantidad de errores en comparación con el cerebro humano. Sin embargo, la dificultad del computador radica en que requiere instrucciones específicas para que su objetivo sea acorde al del usuario.

-> Un computador digital es una máquina que puede resolver problemas ejecutando las intrucciones que recibe de las personas por medio intrumentos de entrada de datos (perifericos).

## ¿Qué son los circuitos electricos de un computador?

Un circuito eléctico es una interconexión de componentes eléctrivos que transportan la corriente eléctrica a través de una trayectoria cerrada. Son sistemas que permiten el flujo de corriente eléctrica para realizar diferentes funciones y operaciones en dispositivos electrónicos. 

Los circuitos electrónicos de una computadora pueden reconocer y ejecutar directamente un conjunto limitado de instrucciones sencillas.

## ¿Qué es un programa?

Un programa es una secuencia de intrucciones que describe como realizar una tarea específica.

Todos los programas tienen que convertirse en una serie de instrucciones sencillas para que la computadora pueda ejecutarlos en sus circuitos electrónicos del CPU.

Las instrucciones sencillas (o primitivas) juntas constituyen el lenguaje máquina que permite a las personas comunicarse con las computadoras.

#### Ejemplo de Instrucciones sencillas

1- Sumar dos números.
2- Verificar si un número es 0.
3- Copiar un dato de una parte de la memoria a otro.

## ¿Qué son los lenguajes máquinas?

El lenguaje de máquina o código máquina es el sistema de códigos directamente interpretable por un circuito microporgramable, como el microprocesador de una computadora o el microcontrolador de un autómata.

Las personas que diseñan una computadora nueva deben decidir que instrucciones incluirán en su lenguaje máquina. Por lo regular, se trata de hacer las instrucciones primitivas lo más simple posible, reduciendo así la complejidad y el costo de los circuitos.

Los lenguajes de máquina son tan básicos que resultan dificiles y tediosos de usar para las personas.

## Organización Estructurada de Computadoras

A lo largo de los años, las computadoras se han estructurado en una serie de niveles de abstracción, cada uno apoyándose en el anterior, lo que permite controlar la complejidad y diseñar sistemas de manera organizada.

- **Nivel de Hardware**: Componentes físicos como el procesador y la memoria.
- **Nivel de Microprogramación**: Microinstrucciones que controlan el hardware.
- **Nivel de Lenguaje Máquina**: Instrucciones que el procesador ejecuta directamente.
- **Nivel de Sistema Operativo**: Gestiona recursos y facilita la ejecución de programas.
- **Nivel de Lenguaje de Alto Nivel**: Lenguajes de programación fáciles de usar como Python o Java.
- **Nivel de Aplicaciones**: Programas que usan los usuarios finales, como los navegadores y juegos.

## Componentes de un Computador

Un computador está compuesto por el software y por el hardware.

### Software

Es el componente intangible que permite a una computadora realizar tareas específicas.

- **Aplicaciones**: Software diseñado para los usuarios finales.
- **Sistemas Operativos (OS)**: Interfaz entre las aplicaciones y el hardware de la computadora.
- **Software del Sistema**: Rutinas necesarias para arrancar el sistema operativo (BIOS).

### Hardware

Es el conjunto de componentes físicos y tangibles de una computadora.

- **CPU**: Es la Unidad Central de Procesamiento del computador.
- **Memoria Principal**: Es el área de trabajo del CPU.
- **Memoria Secundaria**: Es el área de almacenamiento permanente.
- **Periféricos**: Dispositivos de entrada y salida.

## La Arquitectura de von Neumann

La arquitectura de von Neumann es un modelo de diseño de computadoras que describe un sistema donde la CPU y la memoria comparten un único bus para la transferencia de datos e instrucciones. Este diseño puede llevar a un cuello de botella conocido como el cuello de botella de von Neumann, donde la velocidad del sistema se ve limitada por la capacidad del bus compartido.

### Bus de Datos en la Arquitectura de von Neumann

El bus de datos es el canal a través del cual se transfieren los datos entre la CPU y la memoria. El ancho del bus de datos, medido en bits, determina cuántos datos pueden ser transferidos simultáneamente. Por ejemplo, un bus de datos de 32 bits puede transferir 32 bits de datos a la vez.

El tamaño de bits del sistema operativo está estrechamente relacionado con el ancho del bus de datos. Un sistema operativo de 32 bits está diseñado para trabajar con un bus de datos de 32 bits, lo que significa que puede manejar datos en bloques de 32 bits. De manera similar, un sistema operativo de 64 bits puede manejar datos en bloques de 64 bits, aprovechando un bus de datos más ancho para mejorar el rendimiento y la eficiencia del sistema.

En resumen, la arquitectura de von Neumann y el bus de datos juegan un papel crucial en la eficiencia y capacidad de un sistema operativo, determinando cómo se manejan y transfieren los datos dentro del sistema.