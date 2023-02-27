// C++ code

int t = 750; // Tiempo de parpadeo

void setup()
{
  pinMode(8, OUTPUT); // LED 1
  pinMode(9, OUTPUT); // LED 2
  pinMode(10, OUTPUT); // LED 3
  pinMode(11, OUTPUT); // LED 4
}

void loop()
{
  // Encender y apagar todas las luces
  for (int i = 8; i <= 11; i++)
  {
    digitalWrite(i, HIGH);  
  }
  delay(t);
  for (int i = 8; i <= 11; i++)
  {
    digitalWrite(i, LOW);  
  }
  delay(t);

  // Encender de derecha a izquierda
  for (int i = 8; i <= 11; i++)
  {
  	digitalWrite(i, HIGH);  
  	delay(t);
    digitalWrite(i, LOW);
  }
  
  // Encender de izquierda a derecha
  for (int i = 11; i >= 8; i--)
  {
  	digitalWrite(i, HIGH);  
  	delay(t);
    digitalWrite(i, LOW);
  }

  // Encender el primero y el segundo,
  // luego apagar el segundo
  digitalWrite(11, HIGH);  
  digitalWrite(10, HIGH);  
  delay(t);
  digitalWrite(10, LOW);  
  delay(t);

  // Encender el primero 2 veces y el resto se
  // enciende de forma secuencial 
  for (int i = 0; i < 2; i++)
  {
  	digitalWrite(11, HIGH);
    delay(t);
  	digitalWrite(11, LOW);
    delay(t);
  }
  for (int i = 11; i >= 8; i--)
  {
  	digitalWrite(i, HIGH);
    delay(t);
  	digitalWrite(i, LOW);
  }
  delay(t);
}