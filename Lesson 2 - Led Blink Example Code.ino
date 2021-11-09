///////////////////////
//                   //
// Robotics Teaching //
//                   //
///////////////////////

//Credits to @that_duck_over_there and @epic_space


const int ledPinOrange = 12; //The orange led is conected tp pin 12  .in this line we make a variabile called ledPinOrange and we set it to 12 this is to macke it easyer in the future if we want to conect the led to another pin
const int ledPinGreen = 11; //The green led is conected tp pin 11    .in this line we make a variabile called ledPinGreen and we set it to 11 this is to macke it easyer in the future if we want to conect the led to another pin
const int ledPinBlue = 10; //The blue led is conected tp pin 10      .in this line we make a variabile called ledPinBlue and we set it to 10 this is to macke it easyer in the future if we want to conect the led to another pin

void setup() {
  //here in void setup we put the code that runs just once when you power on or aftre you push the reset button on the Arduino


  pinMode(ledPinOrange, OUTPUT); //Here we initialize ledPinOrange wich we sad that it is pin 12 at line 1 as an output
  pinMode(ledPinGreen, OUTPUT); //Here we initialize ledPinGreen wich we sad that it is pin 11 at line 2 as an output
  pinMode(ledPinBlue, OUTPUT); //Here we initialize ledPinBlue wich we sad that it is pin 10 at line 3 as an output
}

void loop() {
  //here in void loop we put the code that runs forever until you unplug or push the reset button


  digitalWrite(ledPinOrange, HIGH); // here we output 5v(HIGH) on ledPinOrange
  delay(100); //here we tell the Arduino to wait 100ms (the value has to be in ms so if you want the Arduino to wait 1 second type "delay(1000);"

  digitalWrite(ledPinGreen, HIGH); // here we output 5v(HIGH) on ledPinGreen
  delay(100); //here we tell the Arduino to wait 100ms

  digitalWrite(ledPinBlue, HIGH); // here we output 5v(HIGH) on ledPinBlue
  delay(100); //here we tell the Arduino to wait 100ms

  digitalWrite(ledPinOrange, LOW); // here we output 0v(LOW) on ledPinOrange
  delay(100); //here we tell the Arduino to wait 100ms

  digitalWrite(ledPinGreen, LOW); // here we output 0v(LOW) on ledPinGreen
  delay(100); //here we tell the Arduino to wait 100ms

  digitalWrite(ledPinBlue, LOW); // here we output 0v(LOW) on ledPinBlue
  delay(100); //here we tell the Arduino to wait 100ms

}
