/*Rutina Ociosa Simple*/
/*Enciende los leds aparentando trazar una circunferecia*/


//Variables
int led[]={4,5,6,7,8,9,10,11,12,13};
int tiempoRetOciosa=200; //en milisegundos

void setup() {
  // put your setup code here, to run once:
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
  pinMode(led[5], OUTPUT);
  pinMode(led[6], OUTPUT);
  pinMode(led[7], OUTPUT);
  pinMode(led[8], OUTPUT);
  pinMode(led[9], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(led[0],HIGH);
   digitalWrite (led[4],HIGH);
   delay(tiempoRetOciosa);
   
   digitalWrite (led[0],LOW);
   digitalWrite (led[4],LOW);
   digitalWrite(led[1],HIGH);
   digitalWrite (led[5],HIGH);
   delay(tiempoRetOciosa);

   digitalWrite (led[1],LOW);
   digitalWrite (led[5],LOW);
   digitalWrite(led[2],HIGH);
   digitalWrite (led[6],HIGH);
   delay(tiempoRetOciosa);

   digitalWrite (led[2],LOW);
   digitalWrite (led[6],LOW);
   digitalWrite(led[3],HIGH);
   digitalWrite (led[7],HIGH);
   delay(tiempoRetOciosa);

   digitalWrite(led[3],LOW);
   digitalWrite (led[7],LOW);
}
