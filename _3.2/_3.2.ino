/***************************************************************
**                  Projecte 3.                               **   
**          Hacer que el arduino escribira palabras           **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int thisByte = 33;                 // configurar el numero 33 com a "thisByte"

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
} 


//****** Loop **************************************************

void loop()                      // aqui es va repetint en cicle 

 { 
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)              // si arriba a 126 escriu l'ultim caracter visible '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;                      // va al següent caracter
} 


