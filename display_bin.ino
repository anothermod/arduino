void setup() {
//Old version
//  pinMode(2, OUTPUT);
//  pinMode(3, OUTPUT);
//  pinMode(4, OUTPUT);
//  pinMode(5, OUTPUT);
  DDRD = 0b11110000;
}

void loop() {
//Old version
//for (int i = 0; i < 10; i++) {
//delay(1000);
//bool bit1 = i & 0b00000001;
//bool bit2 = i & 0b00000010;
//bool bit3 = i & 0b00000100;
//bool bit4 = i & 0b00001000;
//digitalWrite(2, bit1);
//digitalWrite(3, bit2);
//digitalWrite(4, bit3);
//digitalWrite(5, bit4);
//}
for(int i = 0; i < 10; i++){
    PORTD = i << 4;
    delay(1000);
  }
}
