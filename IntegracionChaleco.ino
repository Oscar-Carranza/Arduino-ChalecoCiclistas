//Variables
int bot[]={1,2,3};
int numbots=3;
int led[]={4,5,6,7,8,9,10,11,12,13};
int numLeds=10;
int tiempoRet=400;
int tiempoRetOciosa = 200;

int i;

boolean bot_alto=LOW;
boolean bot_derecha = LOW;
boolean bot_izquierda = LOW;

int cuenta_alto=0;
int cuenta_der = 0;
int cuenta_izq = 0;
int cuenta_ocio = 0;

void setup(){
    // put your setup code here, to run once:
   for(i=0; i<numbots;i++){
      pinMode(bot[i], INPUT);
   }
 
    for(i=0; i<numLeds; i++){
     pinMode(led[i], OUTPUT);
    }
}

void loop(){
    // put your main code here, to run repeatedly:

  for(i=0; i<numLeds; i++){
      digitalWrite (led[i], LOW);
  }
  bot_derecha = digitalRead (bot[0]);
  bot_alto = digitalRead (bot[1]);
  bot_izquierda = digitalRead (bot[2]);

  if (bot_derecha==HIGH){
    Derecha();
  }
  else if(bot_alto==HIGH){
    Alto();
  }
  else if(bot_izquierda==HIGH){
    Izquierda();
  }
  else{
    Ociosa();
  }
  
}


void Derecha (){
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
  delay (tiempoRet);
  cuenta_der++;
  if (cuenta_der > 3){
    cuenta_der = 0;
  }
}

void Alto(){
    if(cuenta_alto==1){
      for(i=0; i<numLeds; i++){
      digitalWrite(led[i], HIGH);
      }
    }
    
    else{
      for(i=0; i<numLeds; i++){
      digitalWrite(led[i], LOW);
      }
    }
    
    delay(tiempoRet);
    cuenta_alto++;

    if(cuenta_alto>1){
      cuenta_alto=0;
    }
    
  }



void Izquierda (){
  switch(cuenta_izq){
    case 0:
      digitalWrite(led[2], HIGH);
      digitalWrite(led[9], HIGH);
      digitalWrite(led[4], HIGH);
     break;
     case 1:
       digitalWrite(led[1], HIGH);
       digitalWrite(led[8], HIGH);
       digitalWrite(led[5], HIGH);
      break;
      case 2:
         digitalWrite(led[0], HIGH);
         digitalWrite(led[7], HIGH);
         digitalWrite(led[6], HIGH);
       break;
       default:
        ;
  }
  delay (tiempoRet);
  cuenta_izq++;
  if (cuenta_izq > 3){
    cuenta_izq = 0;
  }
}


  void Ociosa ()
{
 digitalWrite (led[cuenta_ocio],HIGH);
 digitalWrite (led[cuenta_ocio+4],HIGH);
 delay (tiempoRetOciosa);
 cuenta_ocio++;
 if (cuenta_ocio > 3){
    cuenta_ocio = 0;
 }
}

