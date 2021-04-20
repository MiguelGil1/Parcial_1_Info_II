//PROTOTIPO DE FUNCIONES
void verificacion();
void imagen();
int potiValue;
//FIN PROTOTIPO DE FUNCIONES
// DECLARACION DE VARIABLES
// column counter
int j = 0;
int k;
int row[8] = {127, 191, 223, 239, 247, 251, 253, 254};
byte A[] = {  B00000000,B00111100,B01100110,B01100110,B01111110,B01100110,B01100110,B01100110};
byte B[] = {B01111000,B01001000,B01001000,B01110000,B01001000,B01000100,B01000100,B01111100};
byte C[] = {B00000000,B00011110,B00100000,B01000000,B01000000,B01000000,B00100000,B00011110};
byte D[] = {B00000000,B00111000,B00100100,B00100010,B00100010,B00100100,B00111000,B00000000};
byte E[] = {B00000000,B00111100,B00100000,B00111000,B00100000,B00100000,B00111100,B00000000};
byte F[] = {B00000000,B00111100,B00100000,B00111000,B00100000,B00100000,B00100000,B00000000};
byte G[] = {B00000000,B00111110,B00100000,B00100000,B00101110,B00100010,B00111110,B00000000};
byte H[] = {B00000000,B00100100,B00100100,B00111100,B00100100,B00100100,B00100100,B00000000};
byte I[] = {B00000000,B00111000,B00010000,B00010000,B00010000,B00010000,B00111000,B00000000};
byte J[] = {B00000000,B00011100,B00001000,B00001000,B00001000,B00101000,B00111000,B00000000};
byte K[] = {B00000000,B00100100,B00101000,B00110000,B00101000,B00100100,B00100100,B00000000};
byte L[] = {B00000000,B00100000,B00100000,B00100000,B00100000,B00100000,B00111100,B00000000};
byte M[] = {B00000000,B00000000,B01000100,B10101010,B10010010,B10000010,B10000010,B00000000};
byte N[] = {B00000000,B00100010,B00110010,B00101010,B00100110,B00100010,B00000000,B00000000};
byte O[] = {B00000000,B00111100,B01000010,B01000010,B01000010,B01000010,B00111100,B00000000};
byte P[] = {B00000000,B00111000,B00100100,B00100100,B00111000,B00100000,B00100000,B00000000};
byte Q[] = {B00000000,B00111100,B01000010,B01000010,B01000010,B01000110,B00111110,B00000001};
byte R[] = {B00000000,B00111000,B00100100,B00100100,B00111000,B00100100,B00100100,B00000000};
byte S[] = {B00000000,B00111100,B00100000,B00111100,B00000100,B00000100,B00111100,B00000000};
byte T[] = {B00000000,B01111100,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000};
byte U[] = {B00000000,B01000010,B01000010,B01000010,B01000010,B00100100,B00011000,B00000000};
byte V[] = {B00000000,B00100010,B00100010,B00100010,B00010100,B00010100,B00001000,B00000000};
byte W[] = {B00000000,B10000010,B10010010,B01010100,B01010100,B00101000,B00000000,B00000000};
byte X[] = {B00000000,B01000010,B00100100,B00011000,B00011000,B00100100,B01000010,B00000000};
byte Y[] = {B00000000,B01000100,B00101000,B00010000,B00010000,B00010000,B00010000,B00000000};
byte Z[] = {B00000000,B00111100,B00000100,B00001000,B00010000,B00100000,B00111100,B00000000};
byte cero[8]={0x3c, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x3c};
byte uno[8]={0x8, 0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c};
byte dos[8]={0x3c, 0x7e, 0x6e, 0xe, 0x1c, 0x38, 0x7f, 0x7f};
byte tres[8]={0x3c, 0x66, 0x46, 0x1c, 0x1c, 0x46, 0x66, 0x3c};
byte cuatro[8]={0xc, 0x1c, 0x34, 0x64, 0x7e, 0xc, 0xc, 0xc};
byte cinco[8]={0xff, 0xff, 0xe0, 0xfe, 0x7, 0xc7, 0xff, 0x7e};
byte seis[8]={0x3c, 0x66, 0x40, 0x40, 0x7c, 0x66, 0x66, 0x3c};
byte siete[8]={0x7e, 0x7e, 0x6, 0x1f, 0x1f, 0x6, 0x6, 0x6};
byte ocho[8]={0x3c, 0x66, 0x66, 0x3c, 0x3c, 0x66, 0x66, 0x3c};
byte nueve[8]={0x3c, 0x66, 0x66, 0x3e, 0x6, 0x46, 0x3c, 0x0};

const int data = 2;
const int store = 3;
const int shift = 4;
int opt;

//FIN DDECLARACION DE VARIABLES


void setup(){
  pinMode(data, OUTPUT);
  pinMode(store, OUTPUT);
  pinMode(shift, OUTPUT);
  Serial.begin(9600);
}


void loop(){
  Serial.println("MENU:");
  Serial.println("1.) Verificar el funcionamiento de todos los leds.");
  Serial.println("2.) Mostar un solo patron de leds.");
  Serial.println("3.) Mostar una secuancia de patrones de leds.");
  Serial.print("Seleccione una opcion: ");
  while(Serial.available() == 0);
  opt = Serial.parseInt();
  Serial.println(opt);
  switch(opt){
  case 1:
    verificacion();
    break;
  case 2:
    imagen();
    break;
  case 3:
    break;
  default:
    Serial.println("Opcion fuera de rango.");
    break;
  }
}
void poti(){
  potiValue = 10;
}
void verificacion(){
  byte all [8]={0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
  for(k = 0; k<20; k++){
    for(int i=0; i<8; i++){
      digitalWrite(store, LOW);
      shiftOut(data, shift, LSBFIRST, all[j]);
      shiftOut(data, shift, LSBFIRST, row[i]);
      digitalWrite(store, HIGH);
      j++;
      poti();
      delay(potiValue);
    }
    j = 0;
  }
  Serial.println("Prueba de leds Finalizadacon exito! :)");
}
void imagen(){
  int opt2;
  Serial.println("1.) Mostrar un patron predefinido.");
  Serial.println("2.) Ingresar un patron.");
  Serial.print("Seleccione una opcion: ");
  while(Serial.available() == 0);
  opt2 = Serial.parseInt();
  Serial.println(opt2);
  switch(opt2){
  case 1:
    char caracter;
    Serial.print("Ingrese un caracter: ");
    while(Serial.available() == 0);
    caracter = Serial.read();
    Serial.println(caracter);
    if(caracter == 'A'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, A[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'B'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, B[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'C'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, C[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'D'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, D[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'E'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, E[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'F'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, F[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'G'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, G[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
            j = 0;
        }
    }else if(caracter == 'H'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, H[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'I'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, I[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'J'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, J[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'K'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, K[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'L'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, L[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'M'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, M[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'N'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, N[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'O'){
      for(k = 0; k<100; k++){
          for(int i=0; i<20; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, O[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'P'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, P[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'Q'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, Q[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'R'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, R[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'S'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, S[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'T'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, T[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'U'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, U[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'V'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, V[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'W'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, W[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'X'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, X[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'Y'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, Y[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == 'Z'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, Z[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '0'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, cero[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '1'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, uno[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '2'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, dos[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '3'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, tres[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '4'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, cuatro[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '5'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, cinco[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '6'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, seis[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '7'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, siete[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '8'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, ocho[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }else if(caracter == '9'){
      for(k = 0; k<20; k++){
          for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              shiftOut(data, shift, LSBFIRST, nueve[j]);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              poti();
              delay(potiValue);
          }
          j = 0;
        }
    }
    break;
  case 2:
    int patron[8];
    Serial.print("Ingrese un numeor entero de");
    for(int i = 0; i < 8; i++){
      //Serial.print("Ingrese el patron para la fila ");
      Serial.print(i);
      while(Serial.available() == 0);
      patron[i] = Serial.parseInt();
      Serial.println(patron[i]);
    }
    for(k = 0; k<20; k++){
      for(int i=0; i<8; i++){
            digitalWrite(store, LOW);
            shiftOut(data, shift, LSBFIRST, patron[j]);
            shiftOut(data, shift, LSBFIRST, row[i]);
            digitalWrite(store, HIGH);
            j++;
            poti();
            delay(potiValue);
        }
        j = 0;
      }
    break;
  default:
    Serial.println("Opcion fuera de rango.");
    break;
  } 
}