# Descripción

Este proyecto consiste en crear un riego automático para una maceta pequeña con la ayuda de una placa electrónica ARDUINO. La maceta se regará automáticamente cuando la tierra esté seca.

# Materiales

# Diseño

# Esquema eléctrico

# Programación

## Progamación para comprobar los valores del sensor HW-080

```arduino
int sensor=A0;
void setup(){
    pinMode(sensor, INPUT);
    Serial.begin(9600);
  }
 void loop(){
 //Se hace la lectura analoga del pin A0 (sensor) y se pasa por la funcion map() para ajustar los valores leidos a los porcentajes que queremos utilizar   
int valorHumedad = map(analogRead(sensor), 0, 1023, 100, 0);
Serial.print("Humedad: ");
Serial.print(valorHumedad);
Serial.println("%"); 
delay(100);
  }

```

# Enlaces de ayuda

* https://irisfernandez.com.ar/betaweblog/index.php/2019/11/03/sensor-de-humedad-para-tierra-hw-080/



