void setup() {
  pinMode(5, OUTPUT);
  pinMode(7, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  //delay(300);
  //int val = digitalRead(7);
  //Serial.println(val);
  
  send_char(1);
  send_char(2);
  send_char(3);
  send_char(4);
  send_char(5);
  send_char(6);
  send_char(7);
  send_char(8);
  send_char(9);
  send_char(10);
  send_char(11);
  send_char(12);
  send_char(13);
}

void send_char(char c){
  for(int i = 0; i < 8; ++i){
    disp_char(c);
  }
}

void disp_char(char c){
  digitalWrite(5, HIGH);
  delay(c*5);
  
  digitalWrite(5, LOW);
  delay(c*5);
}

