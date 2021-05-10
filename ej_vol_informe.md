# Práctica 1 Ejercicio voluntario
###### Andrea Muñiz
<p></p>

## Programa + explicación

> Declaramos las librerías necesarias

```
#include <Arduino.h>
```

> Declaramos el pin en el que hemos conectado el potenciómetro.

```
const int potPin = 34;
```

> Inicializamos el valor del potenciometro a 0.

```
int potValue = 0;
```

> Función setup()

En esta función inicializamos el serial a una velocidad de 115200 y añadimos un retraso de un segundo.

```
void setup() {
  Serial.begin(115200);
  delay(1000);
}
```

> Función bucle

Mediante la función _analogRead()_, leemos la información obtenida mediante el puerto al que está conectado el potenciómetro y la guardamos en la variable _potValue_. A continuación imprimimos por el monitor el valor del potenciometro y esperamos medio segundo.

```
void loop() {
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}
```