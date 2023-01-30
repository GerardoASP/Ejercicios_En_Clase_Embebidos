// C++ code
//Declaración de Variables
int pulsador = 2;
int valor_pulsador = 0;
int contador = 0;
int numeros[10] = {0,1,2,3,4,5,6,7,8,9};
int pines_salida[7]={4,5,6,7,8,9,10};

void generar_cero(){
    digitalWrite(pines_salida[0], HIGH);
    digitalWrite(pines_salida[1], HIGH);
  	digitalWrite(pines_salida[2], HIGH);
  	digitalWrite(pines_salida[3], HIGH);
  	digitalWrite(pines_salida[4], HIGH);
  	digitalWrite(pines_salida[5], HIGH);
  	digitalWrite(pines_salida[6], LOW);
  	
}

void generar_uno(){
  	digitalWrite(pines_salida[0], LOW);
  	digitalWrite(pines_salida[1], HIGH);
  	digitalWrite(pines_salida[2], HIGH);
  	digitalWrite(pines_salida[3], LOW);
  	digitalWrite(pines_salida[4], LOW);
  	digitalWrite(pines_salida[5], LOW);
  	digitalWrite(pines_salida[6], LOW);
}

void generar_dos(){
  	digitalWrite(pines_salida[0], HIGH);
  	digitalWrite(pines_salida[1], HIGH);
  	digitalWrite(pines_salida[2], LOW);
  	digitalWrite(pines_salida[3], HIGH);
  	digitalWrite(pines_salida[4], HIGH);
  	digitalWrite(pines_salida[5], LOW);
  	digitalWrite(pines_salida[6], HIGH);
}

void seleccion_numero(int valor){
  if(valor == 0){
    //Serial.println("cero");
    //Serial.println("\n");
  }else if(valor == 1){
    Serial.println("uno");
    Serial.println("\n");
  }else if(valor == 2){
    Serial.println("dos");
    Serial.println("\n");
  }else if(valor == 3){
    Serial.println("tres");
    Serial.println("\n");
  }else if(valor == 4){
    Serial.println("cuatro");
    Serial.println("\n");
  }else if(valor == 5){
    Serial.println("cinco");
    Serial.println("\n");
  }else if(valor == 6){
    Serial.println("seis");
    Serial.println("\n");
  }else if(valor == 7){
    Serial.println("siete");
    Serial.println("\n");
  }else if(valor == 8){
    Serial.println("ocho");
    Serial.println("\n");
  }else if(valor == 9){
    Serial.println("nueve");
    Serial.println("\n");
  }else{
    Serial.println("cero especial");
    Serial.println("\n");
  }
}

void aumentar(int pul){
  if(pul == 0){
    Serial.println("El valor del contador es: ");
  	Serial.println(contador);
    contador = contador + 1;
    delay(200);
  }else{
    delay(200);
  }
}
void setup()
{
  for(int i=0;i<7;i++){
    pinMode(pines_salida[i], OUTPUT);
  }
  pinMode(pulsador, INPUT);
  Serial.begin(9600);
  Serial.println("El valor del contador es: ");
  Serial.println(contador);
}

void loop()
{
  valor_pulsador = digitalRead(pulsador);
  aumentar(valor_pulsador);
}