#include <Adafruit_NeoPixel.h> // Charge la librairie Neo Pixel d'Adafruit utilisé pour piloter le ruban de LED

#define PIXEL_PIN 6 // On définit le pin où est connecté la patte DATA du bandeau
#define PIXEL_COUNT 13 // On définit le nombre de LED compris sur le Ruban de LED soit 150 pour le ruban de 5m50
const int capteur = A0;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800); // Paramètre l'objet strip qui correspond à toute les LED du ruban 

void setup() {
   Serial.begin(9600); // initialise l'Arduino
   pinMode(capteur, INPUT); // initialise le capteur INPUT
   strip.begin(); // Lance la connection
   strip.show(); // Initialise toute les led à 'off'
  // put your setup code here, to run once:
}

/* Définition des couleurs */
int RED[3] = {255, 0, 0}; // Couleur Rouge
int GREEN[3] = {0, 255, 0}; // Couleur Verte
int CYAN[3] = {0, 255, 255}; // Couleur Cyan
int YELLOW[3] = {255, 125, 0}; // Couleur Jaune
int ORANGE[3] = {255, 40, 0}; // Couleur Orange
int PURPLE[3] = {255, 0 , 255}; // Couleur Violette
int PINK[3] = {255, 0, 100}; // Couleur Rose
int BLUE[3] = {0, 0, 255}; // Couleur Bleu
int WHITE[3] = {255, 255, 255}; // Couleur Blanche
int compteur = 0;
int valPoulsPrec = 0;


void allLeds(int COLOR[])
{
for(int i = 0 ; i < PIXEL_COUNT ; i++)
{
strip.setPixelColor(i, COLOR[0], COLOR[1], COLOR[2]);
}
strip.show();
}

void turnOff(){
  for(int i = 0; i<PIXEL_COUNT; i++){
  strip.setPixelColor(i, 0, 0, 0);
  }
  strip.show();
}

void loop() {
  strip.setBrightness(100) ;
  int pouls = digitalRead(capteur); // initialise la variable pouls qui aura pour valeur la valeur lue par le capteur (digitalRead = soit 1 soit 0)
  
  Serial.print("Valeur capteur : "); // afficher dans le moniteur série "valeur capteur :  
  Serial.print(pouls);
  Serial.print("\n");
  Serial.print ("Compteur :");
  Serial.print (compteur);
  Serial.print ("\n");
  if (valPoulsPrec != pouls ){
  compteur ++;
  }
  if (pouls == 1){

    if (compteur % 9 == 0){
      allLeds(RED);
    } 
    else if (compteur % 8 == 0){
      allLeds(GREEN);
    }
    else if (compteur % 8 == 1){
      allLeds(CYAN);
    }
    else if (compteur % 8 == 2){
      allLeds(YELLOW);
    }
    else if (compteur % 8 == 3){
      allLeds(ORANGE);
    }
    else if (compteur %8 == 4){
      allLeds(PURPLE);
    }
    else if (compteur %8 == 5){
      allLeds(PINK);
    }
    else if (compteur %8 == 6){
      allLeds(BLUE);
    }
    else if (compteur %8 == 7){
      allLeds(WHITE);
    }
    valPoulsPrec = 1;
  }
  
  else{
    valPoulsPrec = 0;
  }

  /*allLeds(RED);
