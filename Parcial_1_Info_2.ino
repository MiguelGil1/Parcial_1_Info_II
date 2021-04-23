//PROTOTIPO DE FUNCIONES

void verificacion();
void imagen();
void publik();
void mostar_patron(byte *);
void mostrar_null();

//FIN PROTOTIPO DE FUNCIONES


// DECLARACION DE VARIABLES
int j = 0;
int k;
int row[8] = {127, 191, 223, 239, 247, 251, 253, 254};
byte all [8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
byte null[8] = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte A[] = {B00000000,B00111100,B01100110,B01100110,B01111110,B01100110,B01100110,B01100110};
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
    publik();
    break;
  default:
    Serial.println("Opcion fuera de rango.");
    break;
  }
}
/*
  La sigueinte funcion lleva todos los leds a estado 0
  Apagados
*/
void mostrar_null(){
  for(int i=0; i<8; i++){
      digitalWrite(store, LOW);
      shiftOut(data, shift, LSBFIRST, null[j]);
      shiftOut(data, shift, LSBFIRST, row[i]);
      digitalWrite(store, HIGH);
      j++;
      delay(10);
  }
}

/*
  La siguiente es una funcion que nos permite mostrar en los leds
  el patron que el usario haya ingresado, consta de un doblo for
  El for mas externo se encarga de repetir n veces el patraon
  Mientras que el for mas interno es el que se encarga de mostrar
  el patron de leds, para ello se utiliz la funcion shiftout, la cual
  se encarga de realizar el corrimiento de los datos, primero entregandole
  el valor que se quiere que se muestre (por filas) y el segundo, por columnas
  por medio de la variale global row.

  Debido a nuestra conexion y a la inicializacion de la variable row, podemos
  controlar el comportamiento de nuestra matriz de leds por medio de las filas
  El primer byte qjue se muestra va a ser en la fila superior
*/

void mostar_patron(byte *arreglo){
  for(k = 0; k<20; k++){
    for(int i=0; i<8; i++){
      digitalWrite(store, LOW);
      shiftOut(data, shift, LSBFIRST, *(arreglo + j));
      shiftOut(data, shift, LSBFIRST, row[i]);
      digitalWrite(store, HIGH);
      j++;
      delay(10);
    }
    j = 0;
  }
  mostrar_null(); 
}

/*
  La funcion verificacion se encarga de verificar tpodos los leds
  Invoca a la funcion mostrar_patron, para mostrar el patron establecido
  en la variable  byte all
*/
void verificacion(){
  mostar_patron(all);
  Serial.println("Prueba de leds Finalizadacon exito! :)");
}

/*
  En la funcion imagen podemos ingresar a dos posiles opciones

  Si el usuario ingresa el numero 1, podra ingresar un caracter que vaya
  desde [A-Z] y del [0-9] y se mostrara el caracter que ingrese

  Si el usario ingresa el numero 2, el usuario podra ingresar el estado de cada
  fila de la matriz de leds, ingresando numeros denttro del rango [0-255], los cuales,
  en su representacion binaria son muestra de los casos extremos:

  0 = 000000000 -> todos los leds apagados
  255 = 11111111 -> todos los leds de la fila prendidos

  Se cominza por la fila mas proxima a las resistencias

*/
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
    //Validacion del caracter ingresado
    if(caracter == 'A'){
      mostar_patron(A);
    }else if(caracter == 'B'){
      mostar_patron(B);
    }else if(caracter == 'C'){
      mostar_patron(C);
    }else if(caracter == 'D'){
      mostar_patron(D);
    }else if(caracter == 'E'){
      mostar_patron(E);
    }else if(caracter == 'F'){
      mostar_patron(F);
    }else if(caracter == 'G'){
      mostar_patron(G);
    }else if(caracter == 'H'){
      mostar_patron(H);
    }else if(caracter == 'I'){
      mostar_patron(I);
    }else if(caracter == 'J'){
      mostar_patron(J);
    }else if(caracter == 'K'){
      mostar_patron(K);
    }else if(caracter == 'L'){
      mostar_patron(L);
    }else if(caracter == 'M'){
      mostar_patron(M);
    }else if(caracter == 'N'){
      mostar_patron(N);
    }else if(caracter == 'O'){
      mostar_patron(O);
    }else if(caracter == 'P'){
      mostar_patron(P);
    }else if(caracter == 'Q'){
      mostar_patron(Q);
    }else if(caracter == 'R'){
      mostar_patron(R);
    }else if(caracter == 'S'){
      mostar_patron(S);
    }else if(caracter == 'T'){
      mostar_patron(T);
    }else if(caracter == 'U'){
      mostar_patron(U);
    }else if(caracter == 'V'){
      mostar_patron(V);
    }else if(caracter == 'W'){
      mostar_patron(W);
    }else if(caracter == 'X'){
      mostar_patron(X);
    }else if(caracter == 'Y'){
      mostar_patron(Y);
    }else if(caracter == 'Z'){
      mostar_patron(Z);
    }else if(caracter == '0'){
      mostar_patron(cero);
    }else if(caracter == '1'){
      mostar_patron(uno);
    }else if(caracter == '2'){
      mostar_patron(dos);
    }else if(caracter == '3'){
      mostar_patron(tres);
    }else if(caracter == '4'){
       mostar_patron(cuatro);
    }else if(caracter == '5'){
      mostar_patron(cinco);
    }else if(caracter == '6'){
      mostar_patron(seis);
    }else if(caracter == '7'){
      mostar_patron(siete);
    }else if(caracter == '8'){
      mostar_patron(ocho);
    }else if(caracter == '9'){
      mostar_patron(nueve);
    }
    break;
  case 2:
    int patron [8];
    Serial.println("Ingrese un numeor entero de 0 a 255 para denotar el estado de ");
    Serial.println("cada fila de la matriz comenzando desde la parte superior de la misma:");
    for(int i = 0; i < 8; i++){
      Serial.print("Ingrese el patron para la fila ");
      Serial.print(i+1);
      Serial.print(": ");
      while(Serial.available() == 0);
      *(patron + i) = Serial.parseInt();
      Serial.println(*(patron + i));
      //Se valida si el numero ingresado esta dentro del rango [0-255]
      while(*(patron + i) > 255 || *(patron + i) < 0){
        Serial.println("El numero ingresado debe estar entre [0,255]");
        Serial.print("Ingrese el patron para la fila ");
        Serial.print(i+1);
        Serial.print(": ");
        while(Serial.available() == 0);
        *(patron + i) = Serial.parseInt();
        Serial.println(*(patron + i));
      }
    }
    for(k = 0; k<20; k++){
      for(int i=0; i<8; i++){
            digitalWrite(store, LOW);
            shiftOut(data, shift, LSBFIRST, *(patron+j));
            shiftOut(data, shift, LSBFIRST, row[i]);
            digitalWrite(store, HIGH);
            j++;
            delay(10);
        }
        j = 0;
    }
    mostrar_null();
    break;
  default:
    Serial.println("Opcion fuera de rango.");
    break;
  } 
}

/*
  La funcion publik, es la extrapolacion del caso dos de la funcion imagen
  Ya que en esta, el usario ingresa la cantidad de patrones que desea mostrar en la
  matriz de leds y se crea dinamicamnte una matriz de enteros que al igual contiene 
  numeros desde el 0 al 255

  Sea n el numero de patrones que el usario ingreso

  Al usuario se le pedira n * 8 estados

  Para luego culminar mostrandolos en la matreiz de leds por medio de la siguiente extructura:

  El while mas externo sirve para ir avanzando en las secuencias

  El for mas externo se encarga de repetir n veces el patraon
  Mientras que el for mas interno es el que se encarga de mostrar
  el patron de leds, por medio del algorimo explicado para la funcion
  void mostrar_patron()
*/
void publik(){
  int num_patrones = 0;
  int num = 0;
  Serial.print("Ingrese cuantos patrones quiere mostrar: ");
  while(Serial.available() == 0);
  num_patrones = Serial.parseInt();
  Serial.println(num_patrones);

  //CREAMOS DINAMICAMENTE LA MATRIZ
  int **secuencias = new int *[num_patrones];
  for(int i = 0; i < num_patrones; i++){
        secuencias[i] = new int [8];
  }
  //FIN CREACION DE MATRIZ DINAMICAMENTE
  
  //INGRESANDO VALORES A LA MATRIZ
  Serial.println("Ingrese un numeor entero de 0 a 255 para denotar el estado de ");
  Serial.println("cada fila de la matriz comenzando desde la parte superior de la misma:");
  for(int i = 0; i < num_patrones; i++){
        for(int j = 0; j < 8; j++){
            Serial.print("Ingrese el valor de la secuencia ");
            Serial.print(i+1);
            Serial.print(" de la fila ");
            Serial.print(j+1);
            Serial.print(": ");
            while(Serial.available() == 0);
            num = Serial.parseInt();
            Serial.println(num);
            while(num > 255 || num < 0){
              Serial.println("El numero ingresado debe estar entre [0,255]");
              Serial.print("Ingrese el valor de la secuencia ");
              Serial.print(i+1);
              Serial.print(" de la fila ");
              Serial.print(j+1);
              Serial.print(": ");
              while(Serial.available() == 0);
              num = Serial.parseInt();
              Serial.println(num);
            }
            secuencias[i][j] = num;
        }
    }
    //Fin de ingreso de valores a la matriz de secuencias

    int tempo;
    Serial.print("Ingrese el tiempo que desea que transcurra entre los patrones ingresados: ");
    while(Serial.available() == 0);
    tempo = Serial.parseInt();
    Serial.println(tempo);

    //MOSTRANDO LOS PATRONES POR LOS LEDS
    int count_secuencia = 0;
    while(count_secuencia != num_patrones){
      for(k = 0; k<20; k++){
        for(int i=0; i<8; i++){
              digitalWrite(store, LOW);
              int valor = secuencias[count_secuencia][i];
              shiftOut(data, shift, LSBFIRST, valor);
              shiftOut(data, shift, LSBFIRST, row[i]);
              digitalWrite(store, HIGH);
              j++;
              delay(tempo);
          }
          j = 0;
      }
      count_secuencia++;
    }
    //FIN DE MOSTRAR PATRONES POR LEDS
    mostrar_null();
    //Se elimina del HEAP la variable secuencias
    delete []secuencias;
}