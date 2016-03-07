/***************************************************************
**               Projecte 1.                                  **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int drive_gb = 100;
long drive_mb;            //canviamos de "int" a "long" para que coja mas bytes


void setup()              // se inicia una vez al empezar
{
  Serial.begin(9600);     // configuracion de la velocidad de datos
   Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
  
}



//****** Loop **************************************************

void loop()  // aqui se escribe para que se vaya repitiendo en ciclo
{
}
