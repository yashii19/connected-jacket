const int capteur = A0;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600); // initialise l'Arduino
pinMode(capteur, INPUT); // initialise le capteur INPUT
pinMode(11, OUTPUT); // initialise la LED sur le port 11 }

void loop() {
// put your main code here, to run repeatedly:
int pouls = digitalRead(capteur); // initialise la variable pouls qui aura pour valeur la valeur lue par le capteur (digitalRead = soit 1 soit 0)
Serial.print("Valeur capteur : "); // afficher dans le moniteur série "valeur capteur :  
Serial.print(pouls);
Serial.print("\n");
digitalWrite (11, pouls);}
