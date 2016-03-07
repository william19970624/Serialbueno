/***************************************************************
**               Projecte 1.                                  **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int a = 5;
int b = 10;
int c = 20;

void setup()              // se inicia una vez al empezar
{
  Serial.begin(9600);     // configuracion de la velocidad de datos

  Serial.println("The king of the maths ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // sumar
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicar
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // dividir
  Serial.println(c / b);

  Serial.print("c % b = ");       // porcentage
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // restar
  Serial.println(b - c);
}



//****** Loop **************************************************

void loop()  // aqui se escribe para que se vaya repitiendo en ciclo
{
}
