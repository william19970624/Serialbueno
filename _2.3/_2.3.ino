void setup()    // se inicia una vez al empezar          
{
  Serial.begin(9600); // es la velocidad de datos   
}

void loop()      //se va repitiendo continuamente               
{
  Serial.println("DIE ");  // escribira DIE
  delay(1000);             // freqüencia de repeticio
}
