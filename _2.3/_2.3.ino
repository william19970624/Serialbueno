/***************************************************************
**               Projecte 1.                                  **   
**          Hacer que el arduino escriba palabras             **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************
void setup() {          // se inicia una vez al empezar 

  Serial.begin(9600);   // es la velocidad de datos 
}


//****** Loop **************************************************
void loop() {              //se va repitiendo continuamente 
  
  Serial.println("DIE ");  // escribira die
  delay(1000);             // freqüencia de repeticio

}



