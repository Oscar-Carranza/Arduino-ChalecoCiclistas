/*Programa Izquierda Estructuras
 Para el encendido de led a la izquierda*/

 //variables
 int bot=3;
 int led[]={4,5,6,7,8,9,10,11,12,13};
 int numLeds=10;
 int tiempoRet=400;
 int i;
 int cuenta_izq=0;
 boolean bot_izq=LOW;
 
 void setup(){
 // pinMode(bot, INPUT);
  for(i=0; i<numLeds; i++){
    pinMode(led[i], OUTPUT);
  }
 }

 //Rutina Izquierda
 void loop(){
 // bot_izq=digitalRead(bot);
 // if (bot_izq==HIGH){
    switch (cuenta_izq){
      case 0:
        digitalWrite (led[2],HIGH);
        digitalWrite (led[9],HIGH);
        digitalWrite (led[4],HIGH);
        break;

       case 1: 
        digitalWrite (led[1],HIGH);
        digitalWrite (led[8],HIGH);
        digitalWrite (led[5],HIGH);
        break;

       case 2:
        digitalWrite (led[0],HIGH);
        digitalWrite (led[7],HIGH);
        digitalWrite (led[6],HIGH);
        break;

       default:
        ;
    }
    delay(tiempoRet);
    cuenta_izq++;

     if (cuenta_izq > 3){
      cuenta_izq=0;
     }
  //}
  for(i=0; i<numLeds; i++){
    digitalWrite(led[i], LOW);
  }
 }

