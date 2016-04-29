int array[] = {12,11,10,9,6};

void setup() {

  // initialize digital pin 13 as an output.
  for (int i=0; i<5;i++){
    pinMode(array[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int i=0; i<5;i++){
       for (int j=0; j<255; j++) {
           analogWrite(array[i], j);
           delay(10);
       }
  }
  for (int i=0; i<5;i++){
       for (int j=255; j>0; j--) {
           analogWrite(array[i], j);
           delay(10);
       }
  }
}
