/***************************************************************
**               Projecte 2.6                                **   
**          Hacer que el arduino scribira palabras            **
**                                                            **
***************************************************************/


//****** Includes **********************************************


//****** Variables *********************************************


//****** Setup *************************************************

int drive_gb = 101;
long drive_mb;            //canviamos de "int" a "long" para que coja mas bytes


void setup()              // se inicia una vez al empezar
{
  Serial.begin(9600);     // configuracion de la velocidad de datos
   Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb * 1024 ; // canvio l'ordre en la multiplicacio

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
  
}



//****** Loop **************************************************

void loop()  // aqui se escribe para que se vaya repitiendo en ciclo
{
}
