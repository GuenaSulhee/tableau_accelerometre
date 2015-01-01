/*

Inspiré du travail de Stephen McKinley et Lee-Huang Chen
  Lorsque la position du joueur est détectée, il la stocke dans un tableau
 
 */
 
 
 const int TailleTableau = 30;   // Taille du tableau
 int Position[TailleTableau];    // Tableau  
 int index = 0;                  // Position dans le tableau
 int total = 0;                  // Somme de toutes les valeurs 
 int xMoyenne = 0;               // Moyenne calculée de toutes les positions
 int Xout = 0; 
 
 int xpos1=A3;
 //int ypos1=A2;
 
void setup() { 
  // Communication série
 Serial.begin(9600);
 // Le tableau est remis à zéro
   for (int init = 0; init < TailleTableau; init++)
     Position[init] = 0;   
   

 // Arduino demande de se mettre en position    
}

// the loop routine runs over and over again forever:
void loop() {

  // subtract the last reading:
   total= total - Position[index];         
   // read from the sensor:  
   Position[index] = analogRead(xpos1); 
   // add the reading to the total:
   total= total + Position[index];       
   // advance to the next position in the array:  
   index = index + 1;                    
 
   // if we're at the end of the array...
   if (index >= TailleTableau)              
     // ...wrap around to the beginning: 
     index = 0;                           
 
   // calculate the average:
   xMoyenne = total / TailleTableau;
   Xout = round(map(xMoyenne, 255, 395, 20, 0));  
   // send it to the computer as ASCII digits
   // send the value of analog input 0:
   
   

  

}
