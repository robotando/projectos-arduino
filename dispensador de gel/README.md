# Descripción

Este proyecto consiste en crear un dispensador automático de gel hidroalcoholico para higienizar las manos cuando se colocan cerca de un sensor de proximidad.

# Materiales

# Diseño

# Esquema eléctrico

# Programación

## Progamación para comprobar los valores del sensor HW-080

```arduino
/**
 * Medidor de distancia
 */

void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    pinMode(12, INPUT);
    
    digitalWrite(13, LOW);
}

void loop() {
    digitalWrite(13, HIGH);
    delayMicroseconds(10);
    digitalWrite(13, LOW);
    
    long tiempo;
    tiempo = pulseIn(12, HIGH);
    
    // Velocidad Sonido = 343 m/s
    float distancia = 34300*tiempo*0.000001;
    distancia = distancia / 2;
    
    Serial.print("Distancia: ");
    Serial.println(distancia);
}

```

# Enlaces de ayuda

* https://github.com/robotando/Practicas-ElCableAmarillo/tree/master/medidor-de-distancias



