# Práctica 1 BLINK
<h6 style="color:rgb(93, 173, 226);">
Andrea Muñiz </h6>
<p></p>

Declaramos las cabeceras a utilizar
> #include <Arduino.h>

Definimos el led que se encenderá
> #define led 2

Inicializamos el led como salida
>void setup() {
    <p>Serial.begin(115200);</p>
    <p>pinMode(led, OUTPUT);</p>
}

Creamos un bucle que encenderá y apagará el led cada 1000ms y a su vez nos irá informando de cuándo enciende y cuándo apaga dicho led

>void loop() {
  <p>Serial.println("on");</p>
  <p>digitalWrite(led, HIGH);</p>
  <p>delay(500);</p>
  <p>Serial.println("off");</p>
  <p>digitalWrite(led, LOW);</p>
  <p>delay(500);</p>
}
