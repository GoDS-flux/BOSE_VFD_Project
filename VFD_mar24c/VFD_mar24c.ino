int col_data = 3;
int col_clock = 4;

int alpha_data = 5;
int alpha_clock = 6;

int oePin = 7;


//Letters are upside-down
boolean A [] = {1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0};
boolean B [] = {0,1,1,1,1,1,0,0,1,0,1,0,0,1,0,0,1,1,1,0,1,0,0,1,0,1,0,0,1,0,0,1,1,1,1};
boolean C [] = {0,1,1,1,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
boolean D [] = {1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0};
boolean E [] = {1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1};
boolean F [] = {0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1};
boolean G [] = {1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,0,1,1,0,0,0,1,0,1,1,1,0};
boolean H [] = {1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1};
boolean I [] = {0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0};
boolean J [] = {0,0,1,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0};
boolean K [] = {1,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1,1,0,0,0,1};
boolean L [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean M [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean N [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean O [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean P [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean Q [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean R [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean S [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean T [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean U [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean V [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean W [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean X [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean Y [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};
boolean Z [] = {1,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1};


void setup() {
  // put your setup code here, to run once:
  pinMode(col_data, OUTPUT);
  pinMode(col_clock, OUTPUT);
  pinMode(alpha_data, OUTPUT);
  pinMode(alpha_clock, OUTPUT);
  pinMode(oePin, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}



void loop() {
  int col = 20;
  for (char alpha = 'A'; alpha <= 'Z'; alpha++){
    displayVfdChar(col, alpha);
    //Serial.print(col);
    //Serial.println(alpha);
    //delay(250);
    if (col == 1) {
        col = 20;
    }
    col--;
  }
//    for (int col = 20;col >= 1; col--) {
//        displayVfdChar(col, A);
//    }
//    digitalWrite(13, HIGH);
 //   delay(500);
//    digitalWrite(13, LOW);
}

void displayVfdChar(int col, boolean alpha[]) {

  digitalWrite(oePin, HIGH);

 // Display the alpha on a specific column

  for(int columns = 0; columns <= 21; columns++) {
    if (columns == col) {
        digitalWrite(col_data, HIGH);
    } 
    else {
        digitalWrite(col_data, LOW);
    }
    digitalWrite(col_clock, HIGH);
    if (columns == col) {
        digitalWrite(col_data, LOW);
    } 
    else {
        digitalWrite(col_data, HIGH);
    }
    digitalWrite(col_clock, LOW);
  }

  // Padding for extra unused pins on the shift register

  for(int extraPins = 0; extraPins <= 19; extraPins++) {
    digitalWrite(col_data, HIGH);
    digitalWrite(col_clock, HIGH);
    digitalWrite(col_data, LOW);
    digitalWrite(col_clock, LOW);
  }


  for(int pixel = 34; pixel >= 0; pixel--) {
    
    // set data pin to pixel value
    if (alpha[pixel] == 1) {
      digitalWrite(alpha_data, HIGH);
    }
    else {
      digitalWrite(alpha_data, LOW);
    }
    
    // Set clock high to begin clock cycle
    digitalWrite(alpha_clock, HIGH);
    
    // Set data pin to not pixel 
    if (alpha[pixel] == 1) {
      digitalWrite(alpha_data, LOW);
    }
    else {
      digitalWrite(alpha_data, HIGH);
    }
    
    // Set clock low to end clock cycle
    digitalWrite(alpha_clock, LOW);
  }
  // Padding for extra unused pins on the shift register
  
  for(int extraPins = 0; extraPins < 5; extraPins++) {
    digitalWrite(alpha_data, HIGH);
    digitalWrite(alpha_clock, HIGH);
    digitalWrite(alpha_data, LOW);
    digitalWrite(alpha_clock, LOW);
  }



  // Show your work, enable the output for a short period
  digitalWrite(oePin, LOW);
  delayMicroseconds(62);
  //digitalWrite(oePin, HIGH);
  //delay(100); // will need to remove later, for diagnostic purposes
}
