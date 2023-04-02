#include <Adafruit_BMP085.h>
#include <Wire.h>

Adafruit_BMP085 bmp;           //Iniciamos una instancia da livraria BMP085
  
void setup() {
  Serial.begin(9600);  //Iniciamos a comunicação serie
  if (!bmp.begin()) {  //Se há um erro ao iniciar a livraria ...
  Serial.println("Não se pode iniciar o sensor BMP085, comprova as ligações!");  //Mostramos uma mensagem
  while (1) {}   //Paramos a execução
  }
}
  
void loop() {
    /* Lemos os valores do sensor e sacamos a temperatura para o monitor serie
    Serial.print("Temperatura = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");

    //Calculamos a altitude assumindo a pressão barométrica 'standard' a 1013.25 milibares
    Serial.print("Altitude = ");
    Serial.print(bmp.readAltitude());
    Serial.println(" metros");
    
    //Calculamos a pressão a nivel do mar usando una função da livraria
    Serial.print("Pressão a nivel do mar (calculada) = ");
    Serial.print(bmp.readSealevelPressure());
    Serial.println(" Pa");

    //Podemos obter uma medição da altitude mais precisa sem conhecermos a pressão real a nivel do mar
    //Se é de 1015 millibars isso equivale a 101500 Pascals
    Serial.print("Altitude real = ");
    Serial.print(bmp.readAltitude(101500));
    Serial.println(" metros");

    */
    
    //Lemos os valores do sensor e sacamos a pressão atmosférica para o monitor serie    
    //Serial.print("Pressão = ");
    //Serial.print(0);
    //Serial.print(" ");
    //Serial.print(190000);
    Serial.print(bmp.readPressure());
    //Serial.println(" Pa");
    
    Serial.println();  //Espaçado entre leituras
    delay(500);      //Pausa de 10 segundos entre leituras
}
