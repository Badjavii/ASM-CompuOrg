# Sistemas de Numeración

Los sistemas de numeración son métodos utilizados para representar cantidades y números. Estos sistemas emplean diferentes bases, como:

- **Decimal (Base 10):** `2`
- **Binario (Base 2):** `10`

Ambas notaciones (10 y 2) representan el mismo número, aunque están escritas en distintos sistemas de numeración.

## Componentes

Los sistemas de numeración se componen de varios elementos clave:

### Número Base

El número base define el entorno en el que se agrupan las cantidades. Es decir, la base indica el valor máximo que se puede utilizar en ese sistema numérico.

Por ejemplo, en un sistema de base 5, las cifras permitidas son: `0, 1, 2, 3, 4`.

### Símbolos

Cada sistema de numeración utiliza un conjunto de símbolos para representar los valores menores a la base. Estos símbolos son únicos para cada valor dentro del sistema y permite la representación de cantidades de manera ordenada y comprensible.

## Ejemplos de Sistemas de Numeración

Para comprender mejor los sistemas de numeración, veamos algunos ejemplos concretos.

### Sistema Numérico Decimal

El sistema numérico decimal es el más comúnmente utilizado en la vida diaria. Tiene una base de 10, lo que significa que emplea diez símbolos diferentes (0-9). Cada posción en un número decimal representa una potencia de 10.

**Ejemplos:**

El número `345` en el sistema decimal se descompone como:

$$3 \times 10^2 + 4 \times 10^1 + 5 \times 10^0 = 300 + 40 + 5$$

### Sistema Numérico Binario

El sistema numérico binaro es fundamental en el ámbito de la computación y la electrónica. Tiene una base de 2, utilizando solo dos símbolos (0 y 1). Cada posición en un número binario representa una potencia de 2.

**Ejemplos:**

El número `1010` en el sistema binario se descompone como:

$$1 \times 2^3 + 0 \times 2^2 + 1 \times 2^1 + 0 \times 2^0 = 8 + 0 + 2 + 0 = 10$$

### Sistema Numérico Hexadecimal

El sistema numérico hexadecimal es ampliamente utilizado en la informática para simplificar la representación de números binarios largos. Tiene una base de 16, lo que significa que utiliza dieciséis símbolos diferentes: 0-9 y A-F, donde A representa el 10, B el 11, y así sucesivamente hasta F, que representa el 15.

**Ejemplo:**"

El número `1A` en el sistema hexadecimal se descompone como:

$$1 \times 16^1 + A \times 16^0 = 1 \times 16 + 10 \times 1 = 16 + 10 = 26$$

#### Relación con las Direcciones de Memoria

En informática, las direcciones de memoria a menudo se expresan en hexadecimal porque esta base es más compacta y fácil de leer para los humanos que el binario. Una dirección de memoria como `0x1A3F` es mucho más manejable que su equivalente en binario `0001101000111111`.

## Curiosidades sobre la Historia de los Sistemas de Numeración 

### Sistema Numérico Maya

Los antiguos mayas desarrollaron un sistema vigesimal (base 20) que utilizaba puntos y rayas para representar números. Su sistema también incluía el concepto del cero, algo inusual para la época. Este sistema era crucial para sus calendarios y complejos cálculos astronómicos.

![This is an imagen](/sources/ImgCompuOrg/maya-numeric-system.png)

### Sistema Numérico Babilónico

Los babilonicos utilizaban un sistema sexagesimal (base 60). Este sistema es la razón por la cual tenemos 60 segundos en un minuto y 60 minutos en una hora. Se basaba en símbolos que representaban valores y posiciones, permitiendo una gran precisión en cálculos astronómicos.

![This is an imagen](/sources/ImgCompuOrg/babilonics-numeric-system.bmp)

### Sistema Base 20 de las Tribus Vadoma

La tribu Vadoma, originaria de Zimbabue, utilizaba sistemas de numeración basados en el conteo de los dedos de las manos y de los pies, resultando en un sistema de base 20. Este enfoque práctico facilitaba el conteo y el comercio en sus comunidades.

### Sistema Basado en las Rayas de los Dedos

Otra tribu utilizaba un sistema donde cada dedo de la mano tenía cuatro rayas, resultando en un sistema de base 8. Cada raya representaba una unidad y los dedos ayudaban a agrupar estas unidades en cifras mayores.

## Operaciones en Sistemas Numéricos

### Suma

La suma en diferenetes sistemas de numeración sigue reglas similares a la suma en el sistema decimal, pero se ajusta a la base del sistema.

**Ejemplo en binario:**

$$1010 + 1101 = 10111$$

### Resta

La resta también sigue reglas similares, con consideraciones para la base específica.

**Ejemplo en binario:**

$$1101 - 1010 = 0011$$

### Multiplicación

La multiplicación en sistemas numéricos puede realizarse mediante métodos de repetición y se adapta a la base del sistema.

**Ejemplo en binario:**

$$101 \times 11 = 1111$$

### Complemento a 1 (o complemento 1)

El complemento a 1 de un número binario se obtiene invirtiendo todos los bits (cambiando 0s por 1s y viceversa).

**Ejemplo:**

El complemento a 1 de `1010` es `0101`.

### Complemento a 2 (o complemento 2)

El complemento a 2 se obtiene sumando 1 al complemento a 1 del número.

**Ejemplo:**

Para `1010`:
1. Complemento a 1: `0101`
2. Sumar 1: `0101 + 1 = 0110`

También se puede ver como recorrer el número de derecha a izquierda hasta encontrar el primer bit 1 y luego invertir los bits que le siguen.

### Complemento a la Base

En cualquier sistema de base R, el complemento a la base se obtiene restando el número \( R^D \), donde D es el tamaño de la palabra, menos el número N.

**Fórmula:**
$$R^D - N$$

### Complemento a la Base -1

El complemento a la base menos 1 se obtiene restando el número de \( R^D \) menos N, y luego restando 1.

**Fórmula:**
$$R^D - N - 1$$

**Ejemplo en decimal:**

Para el número 347 en base 10:
- Complemento a 9 (base - 1): Restar cada dígito de 9: \( 999 - 347 = 652 \)

### Algoritmos de Sustracción con Complementos

Para restar dos números utilizando complementos, convertimos el sustraendo a su complemento y sumamos.

**Ejemplo en binario:**

Restar `1010` de `1101` usando complemento a 2:
1. Complemento a 2 de `1010`: `0110`
2. Sumar: \( 1101 + 0110 = 1\underline{0011} \)

########################################

### Algoritmos de Sustracción con Complementos

Para restar dos números utilizando complementos, convertimos el sustraendo a su complemento y sumamos.

#### Pasos:

1. **Encuentra el complemento 2 del sustraendo**: Este paso implica invertir todos los bits del número y luego sumar 1.
2. **Suma el minuendo (número del cual se resta) y el complemento 2 del sustraendo**: Realiza la suma binaria estándar.
3. **Observa el acarreo final**: Si hay un acarreo después de la suma, generalmente se ignora en el resultado final. Este acarreo indica que la resta se ha completado sin necesidad de préstamo adicional.
4. **Si no hay acarreo**: Si la suma no resulta en un acarreo, esto indica que el minuendo es menor que el sustraendo en valor absoluto. En este caso, tomamos el complemento del resultado y añadimos un signo negativo para indicar que el resultado es negativo.

**Ejemplo en binario:**

Restar `1010` de `1101` usando complemento a 2:
1. Complemento a 2 de `1010`: `0110`
2. Sumar: \( 1101 + 0110 = 1\underline{0011} \)
3. Ignoramos el acarreo final (el dígito más a la izquierda, `1`): El resultado es `0011`.

La interpretación es que `0011` en binario es `3` en decimal, lo que confirma que `1101 - 1010 = 3`.

**Ejemplo en decimal:**

Restar `123` de `456` usando complemento a 10 (complemento a la base):
1. Encuentra el complemento a 10 de `123` en un sistema de palabra de 3 dígitos:
- Complemento a 10 (a la base) de `123`: \( 1000 - 123 = 877 \)
2. Suma `456` y `877`: \( 456 + 877 = 1\underline{1333} \)
3. Ignoramos el acarreo final (el dígito más a la izquierda, `1`): El resultado es `333`.