/***************************************************************
**               Projecte 1.                                  **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int a = 3;
int b = 4;
int h;

void setup() {

  Serial.begin(9600);  

  Serial.print("a = ");
  Serial.println(a);
  
  Serial.print("b = ");
  Serial.println(b);
  
  Serial.print("h = ");
  Serial.println(sqrt(pow(a,2)+pow(b,2)));
  
}

//****** Loop **************************************************
void loop()                       // es va repetint continuament
{
                                  // no fa res
}

