//Ultrasonic Sensor using one led   if distance is below 10 cm , led  is on otherwise led off
int trigPin = 13;
int echoPin = 12;
int led = 5;

void setup() {
  Serial.begin(9600); 
   pinMode(led, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
                                                       //   put your setup code here, to run once:
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
 duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
 Serial.println("CM");
  delay(10);


if((distance<=40)) 
  {
    digitalWrite(led, HIGH);
}
   else if(distance>40)
 {
     digitalWrite(led, LOW);
   }
}