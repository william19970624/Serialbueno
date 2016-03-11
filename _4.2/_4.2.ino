/***************************************************************
**                  Projecte 4.                               **   
**          Control estructura                                **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int tempAigua = 101;                 // configurar el numero 101 com a "tempAigua"

void setup() 
{
  Serial.begin(9600);                // set up Serial library at 9600 bps

  if ( tempAigua >= 100)              // informara de la temperatura de l'aigua 
  {
    Serial.print("Aigua bullint");
  } 

  else 
  {
    Serial.print("Aigua encara no bull");
  }
}



//****** Loop **************************************************

void loop()                         // el que s'escriu aqui es va repetint en cicle 
{ 
} 
