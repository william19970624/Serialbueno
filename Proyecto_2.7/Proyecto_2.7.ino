/***************************************************************
**               Projecte 2.7                                 **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int test = 32767;

void setup()              // se inicia una vez al empezar
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);
}



//****** Loop **************************************************

void loop()  // aqui se escribe para que se vaya repitiendo en ciclo
{
}
