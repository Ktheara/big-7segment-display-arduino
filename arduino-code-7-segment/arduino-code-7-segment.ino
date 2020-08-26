
#include<SR7SEGNM.h>

const char MAX_DIGITS = 2;


SR7SEGNM segments4094(3,2,4,MAX_DIGITS);

int digitBuffer[MAX_DIGITS]={0};
int x=0, y=0;

void setup(){
  int i=0;
  segments4094.begin();
  delay(1000);  
  
}

void loop(){
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      digitBuffer[0]=i;
      digitBuffer[1]=j;
      segments4094.updateSegments(digitBuffer);
      delay(2000);
    }
  }
  delay(3000);
  segments4094.offAllSegments();
  delay(3000);
}
