int wheela_1 = 2;
int wheela_2 = 3;
int wheelb_1 = 4;
int wheelb_2 = 5;
//////////////////////////
int arma_1 = 6;
int arma_2 = 7;
int armb_1 = 8;
int armb_2 = 9;
int armc_1 = 10;
int armc_2 = 11;

char rdata;
void setup()
{
  Serial.begin(9600);
  pinMode(wheela_1, OUTPUT);
  pinMode(wheela_2, OUTPUT);
  pinMode(wheelb_1, OUTPUT);
  pinMode(wheelb_2, OUTPUT);
  pinMode(arma_1, OUTPUT);
  pinMode(arma_2, OUTPUT);
  pinMode(armb_1, OUTPUT);
  pinMode(armb_2, OUTPUT);
  pinMode(armc_1, OUTPUT);
  pinMode(armc_2, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    rdata = Serial.read();
    if (rdata == 'A')
    {
      digitalWrite(wheela_1, HIGH);
      digitalWrite(wheela_2, LOW);
      digitalWrite(wheelb_1, HIGH);
      digitalWrite(wheelb_2, LOW);
    }
    if (rdata == 'B')
    {
      digitalWrite(wheela_1, HIGH);
      digitalWrite(wheela_2, LOW);
      digitalWrite(wheelb_1, LOW);
      digitalWrite(wheelb_2, LOW);
    }

    if (rdata == 'C')
    {
      digitalWrite(wheela_1, LOW);
      digitalWrite(wheela_2, LOW);
      digitalWrite(wheelb_1, HIGH);
      digitalWrite(wheelb_2, LOW);
    }

    if (rdata == 'D')
    {
      digitalWrite(wheela_1, LOW);
      digitalWrite(wheela_2, LOW);
      digitalWrite(wheelb_1, LOW);
      digitalWrite(wheelb_2, LOW);
    }
    if (rdata == 'E')
    {
      digitalWrite(wheela_1, LOW);
      digitalWrite(wheela_2, HIGH);
      digitalWrite(wheelb_1, LOW);
      digitalWrite(wheelb_2, HIGH);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }
    if (rdata == 'F')
    {
      digitalWrite(arma_1, HIGH);
      digitalWrite(arma_2, LOW);
     
    }
     if (rdata == 'G')
    {
      digitalWrite(arma_1, LOW);
      digitalWrite(arma_2, HIGH);
     
    }
    if (rdata == 'H')
    {
      digitalWrite(armb_1, HIGH);
      digitalWrite(armb_2, LOW);
     
    }
     if (rdata == 'I')
    {
      digitalWrite(armb_1, LOW);
      digitalWrite(armb_2, HIGH);
     
    }
  /*  if (rdata == 'J')
    {
      digitalWrite(armc_1, HIGH);
      digitalWrite(armc_2, LOW);
     
    }
     if (rdata == 'K')
    {
      digitalWrite(armc_1, LOW);
      digitalWrite(armc_2, HIGH);
     
    }*/
    if (rdata == 'J')
    {
      digitalWrite(arma_1, LOW);
      digitalWrite(arma_2, LOW);
      digitalWrite(armb_1, LOW);
      digitalWrite(armb_2, LOW);
      digitalWrite(armc_1, LOW);
      digitalWrite(armc_2, LOW);
    }
    

  }
}