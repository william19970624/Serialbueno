/***************************************************************
**                  Projecte 4.                               **   
**          Estructura de control                             **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int tempAigua = 100;                 // configurar el numero 101 com a "tempAigua"

void setup() 
{
  Serial.begin(9600);                // set up Serial library at 9600 bps

  if ( tempAigua > 100)              // si la temperatua de l'aigua es superior a 100º ho informara 
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}


//****** Loop **************************************************

void loop()                         // el que s'escriu aqui es va repetint en cicle 
{ 
} 

