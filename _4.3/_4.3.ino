/***************************************************************
**                  Projecte 4.                               **   
**          Control estructura                                **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int tempAigua = 77;                       // configurar el numero 101 com a "tempAigua"

void setup() 
{
  Serial.begin(9600);                     // set up Serial library at 9600 bps
  if( tempAigua < 90)                     // informara de la temperatura de l'aigua 
  {
    Serial.print("Aigua encara no bull"); // informara de la temperatura de l'aigua
  }
  else if ( tempAigua == 100)
  {
    Serial.print("Aigua a 100C");         // informara de la temperatura de l'aigua
  }

  else if (tempAigua > 100)
  {
    Serial.print("Aigua bullint");        // informara de la temperatura de l'aigua
  }
  else 
  {
    Serial.print("Aigua apunt de bullir");// informara de la temperatura de l'aigua
  }
}



//****** Loop **************************************************

void loop()                         // el que s'escriu aqui es va repetint en cicle 
{ 
} 
