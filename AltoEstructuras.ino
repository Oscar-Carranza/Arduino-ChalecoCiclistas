/*Programa de encendido de led con un ciclo for*/
//Alto de estructuras

//Variables
int bot=2;
int led[]={4,5,6,7,8,9,10,11,12,13};
int numLeds=10;
int tiempoRet=400;
int i;

void setup(){
  pinMode(bot, INPUT);

  for(i=0; i<numLeds; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop(){
  boolean bot_alto=digitalRead(bot);
  if(bot_alto==HIGH){
    for(i=0; i<numLeds; i++){
      digitalWrite(led[i], HIGH);
    }
    delay(tiempoRet);
    for(i=0; i<numLeds; i++){
      digitalWrite(led[i], LOW);
    }
    delay(tiempoRet);
  }
}

