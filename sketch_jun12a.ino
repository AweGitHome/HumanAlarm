    int buzzer = 11;       
    int frequency = 900;
    int PIR_sensor = A5;               
    int val = 0;
    void setup() {
      pinMode(buzzer,OUTPUT);
      pinMode(PIR_sensor, INPUT);
      Serial.begin(9600); 
    }
     
    void loop() {  
      val = analogRead(PIR_sensor);    //读取A0口的电压值并赋值到val  
      Serial.println(val); 
      if(val > 300){
        tone(buzzer,frequency);
        delay(500);
        noTone(buzzer);
        delay(500);
      }
    }
