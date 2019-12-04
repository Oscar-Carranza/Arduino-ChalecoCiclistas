/*Programa Derecha Estructuras
 Para el encendido de led a la derecha*/

 //variables
 int bot=2;
 int led[]={4,5,6,7,8,9,10,11,12,13};
 int numLeds=10;
 int tiempoRet=400;
 int i;
 int cuenta_der=0;
 boolean bot_der=LOW;
 
 void setup(){
  pinMode(bot, INPUT);
  for(i=0; i<numLeds; i++){
    pinMode(led[i], OUTPUT);
  }
 }

 //Rutina Derecha
 void loop(){
  bot_der=digitalRead(bot);
  if (bot_der==HIGH){
    switch (cuenta_der){
      case 0:
        digitalWrite (led[0],HIGH);
        digitalWrite (led[8],HIGH);
        digitalWrite (led[6],HIGH);
        break;

       case 1: 
        digitalWrite (led[1],HIGH);
        digitalWrite (led[9],HIGH);
        digitalWrite (led[5],HIGH);
        break;

       case 2:
        digitalWrite (led[2],HIGH);
        digitalWrite (led[3],HIGH);
        digitalWrite (led[4],HIGH);
        break;

       default:
        ;
    }
    delay(tiempoRet);
    cuenta_der++;

     if (cuenta_der > 3){
      cuenta_der=0;
     }
  }
  for(i=0; i<numLeds; i++){
    digitalWrite(led[i], LOW);
  }
 }

