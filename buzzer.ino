/*
 Fundacion Kinal
 Electronica
Grado: Quito perito
seccion: A
curso: taller de electronica
Nombre: Diego Alejandro Culajay Gonzalez
carnet: 2019485
*/

#define trig 3
#define echo 2
#define Buzzer 5
int nota_do = 261;
int nota_re = 294;
int nota_mi = 329;
int nota_fa = 349;
int nota_sol = 392;
int nota_la = 440;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
  }

void loop() {
   long duracion, distancia;
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 58;

  Serial.print(distancia);
  Serial.println(" cm");
  delay(2000);
  
  if(distancia > 0 && distancia <= 7){ //repetir 2 veces
    tone(Buzzer,nota_do,261);
    delay(250);
    }
    else if(distancia > 7 && distancia <= 14){  //repetir 2 veces
    tone(Buzzer,nota_sol,392);
    delay(250);
    }
    else if(distancia > 14 && distancia <=21){  //repetir 2 veces
    tone(Buzzer,nota_la,440);
    delay(250);
    }
    else if(distancia > 21 && distancia <= 28){  //repetir 1 vez
    tone(Buzzer,nota_sol,392);
    delay(250);
    }
    else if(distancia > 28 && distancia <= 35){  //repetir 2 veces
    tone(Buzzer,nota_fa,349);
    delay(250);
    }
    else if(distancia > 35 && distancia <= 42){ //repetir 2 veces 
    tone(Buzzer,nota_mi,329);
    delay(250);
    }
    else if(distancia > 42 && distancia <= 49){  //repetir 2 veces 
    tone(Buzzer,nota_re,294);
    delay(250);
    }
    else if(distancia > 49 && distancia <= 56){ //repetir 1 vez
    tone(Buzzer,nota_do,261);
    delay(250);
    }
    else if(distancia > 56 && distancia <= 63){ //repetir 2 veces
    tone(Buzzer,nota_sol,392);
    delay(250);
    }
    else if(distancia > 63 && distancia <= 70){ //repetir 2 veces 
    tone(Buzzer,nota_fa,349);
    delay(250);
    }
    else if(distancia > 70 && distancia <= 77){ //repetir 2 veces 
    tone(Buzzer,nota_mi,329);
    delay(250);
    }
    else if(distancia > 77 && distancia <= 85){ //repetir 1 vez 
    tone(Buzzer,nota_re,294);
    delay(250);
    }
    else {
      noTone(Buzzer); // Silencio
      }
}
