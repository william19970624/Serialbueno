/***************************************************************
**                  Projecte 4.                               **   
**          Control estructura                                **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int qualificacio = 3.5;                       // configurar el numero 101 com a "tempAigua"

void setup() 
{
  Serial.begin(9600);               // set up Serial library at 9600 bps
    
  if( qualificacio < 3.5);           // informara de la temperatura de l'aigua 
  
    Serial.print("A");          // informara de la temperatura de l'aigua
  
  else if ( qualificacio < 6.5);
  
    Serial.print("B");         // informara de la temperatura de l'aigua
  

  else if (qualificacio <11.1);
  
    Serial.print("C");        // informara de la temperatura de l'aigua
  
 
  else if (qualificacio <17.7);

    Serial.print("D");        // informara de la temperatura de l'aigua
  
  
  else if (qualificacio <38.2); 
  
    Serial.print("E");        // informara de la temperatura de l'aigua
  
  
  else if (qualificacio <43.2);
  
    Serial.print("F");        // informara de la temperatura de l'aigua
  
  else  
  
    Serial.print("G");        // informara de la temperatura de l'aigua
  
}



//****** Loop **************************************************

void loop()                         // el que s'escriu aqui es va repetint en cicle 
{ 
} 
