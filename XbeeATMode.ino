
void setup() {
  Serial.begin(9600); //Opens communications with the serial monitor
  Serial2.begin(9600); //Opens communications with the Xbee
}

void loop() {
  if(Serial.available()>0){ //Reads input from the Serial monitor
    Serial2.write(Serial.read()); //Sends the data to the Xbee
  }
  if(Serial2.available()>0){ //Checks the Xbee's Serial Buffer for data
    Serial.write(Serial2.read()); //Writes the data to the serial monitor
  }
}
