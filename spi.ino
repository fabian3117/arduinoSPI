#include"SPI.h"
byte MIS=12;
byte MOS=11;
byte SC=13;
byte S=10;
char datosRecibidos[100];
volatile byte indice;
volatile bool recepcionTerminada;

void setup() {
  Serial.begin(115200);

  SPCR!=bit(SPE);
  pinMode(MISO,OUTPUT);
  indice=0;
  recepcionTerminada=false;
  //SPI.begin();
  SPI.attachInterrupt();
  
 // pinMode(MOSI,INPUT);
 // pinMode(SS,INPUT);
  //pinMode(SC,INPUT);
  
}

void loop() {
  //Serial.println("ENVIANDO");
//delay(500);
/*
if(recepcionTerminada){
  datosRecibidos[indice]=0;
  Serial.println(datosRecibidos);
  indice=0;
  recepcionTerminada=false;
  }
  else{
    Serial.println(indice);
    }
*/
while(1){
  
  }
} 
ISR(SPI_STC_vect){
  Serial.println("entro interr");
  /*
}
  byte datoRecibido=SPDR;
if(indice<sizeof datosRecibidos){
  datosRecibidos[indice++]=datoRecibido;

  
  }
  
  */
  byte datoRecibido=SPDR;
  Serial.println(datoRecibido);
  }
