//PROTOTIPO DE FUNCIONES
void verificacion();

//FIN PROTOTIPO DE FUNCIONES
// DECLARACION DE VARIABLES
byte layer[] = {
0B00000000,
0B00000000,
0B00000000,
0B00000000,
0B00000000,
0B00000000,
0B00000000,
0B00000000
};
byte room [] = {
0B11111111,
0B11111111,
0B11111111,
0B11111111,
0B11111111,
0B11111111,
0B11111111,
0B11111111
};

int letchPin = 11; //ST_CP PIN
int clockPin = 12; //SH_CP PIN
int  dataPin = 9; //DS Pin
int opt;
int cont = 0;

//FIN DDECLARACION DE FUNCIONES


void setup(){
	pinMode(letchPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
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
		break;
	case 3: 
		break;
	default:
		Serial.println("Opcion fuera de rango.");
		break;
	}
}
void verificacion(){
	layer[0] = 0B11111110;
	layer[1] = 0B11111101;
	layer[2] = 0B11111011;
	layer[3] = 0B11110111;
	layer[4] = 0B11101111;
	layer[5] = 0B11011111;
	layer[6] = 0B10111111;
	layer[7] = 0B01111111;

	room[0] = 0B00000001;
	room[1] = 0B00000010;
	room[2] = 0B00000100;
	room[3] = 0B00001000;
	room[4] = 0B00010000;
	room[5] = 0B00100000;
	room[6] = 0B01000000;
	room[7] = 0B10000000;

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			digitalWrite(letchPin, LOW);
			shiftOut(dataPin,clockPin, MSBFIRST, layer[i]);
			shiftOut(dataPin,clockPin, MSBFIRST, room[j]);
			digitalWrite(letchPin, HIGH);
			delay(100);
		}	
	}
	layer[0] = 0B11111111;
	layer[1] = 0B11111111;
	layer[2] = 0B11111111;
	layer[3] = 0B11111111;
	layer[4] = 0B11111111;
	layer[5] = 0B11111111;
	layer[6] = 0B11111111;
	layer[7] = 0B00000000;

	room[0] = 0B00000000;
	room[1] = 0B00000000;
	room[2] = 0B00000000;
	room[3] = 0B00000000;
	room[4] = 0B00000000;
	room[5] = 0B00000000;
	room[6] = 0B00000000;
	room[7] = 0B11111111;
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			digitalWrite(letchPin, LOW);
			shiftOut(dataPin,clockPin, MSBFIRST, layer[i]);
			shiftOut(dataPin,clockPin, MSBFIRST, room[j]);
			digitalWrite(letchPin, HIGH);
			//delay(10);
		}	
	}
	Serial.println("Prueba de leds Finalizadacon exito! :)");
}