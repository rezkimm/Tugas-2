void setup() { 
  DDRC = 0x00; 
  PORTC = 0x07; 
  DDRB = 0x0F;    
  PORTB= 0;
}  
void loop() { 
for(int x;x<17;x--){
int a,b;
if(bit_is_clear(PINC, 0)) {
 b=1;
}
else  if(bit_is_clear(PINC, 1)) {
b=2;
}
else  if(bit_is_clear(PINC, 2)) {
 b=3;
}
else  if(b==1) {
  PORTB=a;
  if(a==0){
    a++;}
    else if(a<9){
  a=a*2;
}else if(a=8){
  a=1;}
}
else  if(b==2) {
 PORTB=a;
  if(a==0){
    a=8;}
    else if(a>0){
  a=a/2;
}else if(a=1){
  a=8;}
}
else {
  PORTB=0x00;
}
delay(1000);}
}

