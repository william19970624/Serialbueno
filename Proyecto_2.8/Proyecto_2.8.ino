/***************************************************************
**               Projecte 2.8                                 **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************

int a = 3;
int b = 2;
int d;

//****** Setup *************************************************

void setup()              // se inicia una vez al empezar
{
  Serial.begin(9600);     //set up Serial library at 9600 bps

 Serial.println("Here is division: ");
  
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
  
  Serial.print("a / b = ");
  Serial.println(d);
}



//****** Loop **************************************************

void loop()  // aqui se escribe para que se vaya repitiendo en ciclo
{
}
