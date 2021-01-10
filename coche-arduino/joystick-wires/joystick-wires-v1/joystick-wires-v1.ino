    /*  Arduino DC Motor Control - PWM | H-Bridge | L298N
             Example 02 - Arduino Robot Car Control
        by Dejan Nedelkovski, www.HowToMechatronics.com
    */
    #define in1 13
    #define in2 12
    #define in3 11
    #define in4 10
    
    void setup() {
     
      
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
      pinMode(in3, OUTPUT);
      pinMode(in4, OUTPUT);
    }
    void loop() {
      int xAxis = analogRead(A0); // Read Joysticks X-axis
      int yAxis = analogRead(A1); // Read Joysticks Y-axis
      // Y-axis used for forward and backward control
      if (yAxis > 800) {
        // Set Motor A forward
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        // Set Motor B forward
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
 
      }
      else if (yAxis < 200) {
        // Set Motor A backward
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        // Set Motor B backward
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        

      }
      else if (xAxis < 200) {
        // Set Motor A backward
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        // Set Motor B backward
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        

      }
      else if (xAxis > 800) {
        // Set Motor A forward
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        // Set Motor B forward
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
    }
      else {
        // Set Motor A backward
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        // Set Motor B backward
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
    }
    }
