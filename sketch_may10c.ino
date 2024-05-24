#define btnBluePin 3
#define ledBluePin 5
#define btnRedPin 2
#define ledRedPin 4
#define NUMBER_OF_LEDS 2
/*bool LedBlueIsOn;
bool LedRedIsOn;*/
int LedsPin[NUMBER_OF_LEDS]={ledBluePin,ledRedPin};
bool LedIsOn[NUMBER_OF_LEDS];
int BtnsPin[NUMBER_OF_LEDS]={btnBluePin,btnRedPin};
void setup() {
  // put your setup code here, to run once:
Serial.println(9600);
for(int k=0;k<NUMBER_OF_LEDS;k++){
  pinMode(LedsPin[k],OUTPUT);
  TurnLedOff(k);
}
for(int k=0;k<NUMBER_OF_LEDS;k++){
  pinMode(BtnsPin[k],INPUT_PULLUP);
}
}
/*bool LedIsOn;*/
int CurrBtn;
int LastBtn;
void loop() {
  // put your main code here, to run repeatedly:
  CurrBtn=digitalRead(BtnsPin);
  /*if(digitalRead(BtnsPin[NUMBER_OF_LEDS])==LOW){
    ToggleLed(0);
    ToggleLed(1);
    while(digitalRead(BtnsPin[NUMBER_OF_LEDS])==LOW){delay(50);}
  }*/
  if((CurrBtn==LOW) && (LastBtn==HIGH)){
    ToggleLed(0);
  }
  LastBtn=CurrBtn;
}
void ToggleLed(int chnl){
  if(LedIsOn[chnl]){
  TurnLedOff(chnl);
}
else {
  TurnLedOn(chnl);
}
}

void TurnLedOn(int chnl){
  LedIsOn[chnl] = true;
  digitalWrite(LedsPin[chnl],HIGH);
}
void TurnLedOff(int chnl){
  LedIsOn[chnl] = false;
  digitalWrite(LedsPin[chnl],LOW);
}














/*void ToggleRedLed(){
  if(LedRedIsOn){
  TurnRedLedOff();
}
else {
  TurnRedLedOn();
}
}

void TurnRedLedOn(){
  LedRedIsOn = true;
  digitalWrite(ledRedPin,HIGH);
}
void TurnRedLedOff(){
  LedRedIsOn = false;
  digitalWrite(ledRedPin,LOW);
}*/










/*דרך ב'
if(digitalRead(btnBluePin)==LOW){
digitalWrite(ledBluePin,!digitalRead(ledBluePin));
while(digitalRead(btnBluePin)==LOW){delay(50);}
}
if(digitalRead(btnRedPin)==LOW){
digitalWrite(ledRedPin,!digitalRead(ledRedPin));
while(digitalRead(btnRedPin)==LOW){delay(50);}*/



/*ניסיונות
/*bool switchFlag=false;*/
/*switchFlag=false;
while(digitalRead(btnPin)==LOW)
{
  switchFlag=true;
}
if(switchFlag==true)//exit loop because button press
  {
    digitalWrite(ledPin,!digitalRead(ledPin));
    while(digitalRead(btnPin)==LOW){delay(50);}
  }*/


/*while (ledPin==LOW);
/*while(digitalRead(btnPin)==LOW){delay(50);}*/
/*if(digitalRead(btnPin)==LOW){
digitalWrite(ledPin,LOW);
}*/
