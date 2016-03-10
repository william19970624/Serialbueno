/***************************************************************
**                  Projecte 3.                               **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int num = 64;                                                       // configurar el numero 64 como "num"

void setup() {                                                      // s'inicia una vegada al començar

  Serial.begin(9600);                                               // configuracio de la velocitat de dades      
  Serial.println("Diferentes maneras de expresar el mismo numero:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
}



//****** Loop **************************************************

void loop()                      // aqui es va repetint en cicle 

                                  // no fa res
{
}

