//Serial Read

void setup() {
  pinMode(8, INPUT_PULLUP); // set push button pin as input
  pinMode(42, OUTPUT);      // set LED pin as output
  digitalWrite(42, LOW);    // switch off LED pin

  Serial.begin(9600);       // initialize UART with baud rate of 9600 bps
}

void loop() {
  if(Serial.available()) {
    char data_rcvd = Serial.read();   // read one byte from serial buffer and save to data_rcvd

    if(data_rcvd == '1') digitalWrite(42, HIGH);  // switch LED On
    if(data_rcvd == '0') digitalWrite(42, LOW);   // switch LED Off
  }
}