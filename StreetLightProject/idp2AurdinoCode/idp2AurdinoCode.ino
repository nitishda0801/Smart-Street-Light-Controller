int led = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int led7 = 9;
int led8 = 10;
int led9 = 11;



int ldr = A10;

int ir = A0;
int ir1 = A1;
int ir2 = A2;
int ir3 = A3;
int ir4 = A4;
int ir5 = A5;
int ir6 = A6;
int ir7 = A7;
int ir8 = A8;
int ir9 = A9;



void setup() 
{
  Serial.begin (9600);
  
  pinMode (led,OUTPUT);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);
  pinMode (led6,OUTPUT);
  pinMode (led7,OUTPUT);
  pinMode (led8,OUTPUT);
  pinMode (led9,OUTPUT);

  
  pinMode (ldr,INPUT);
  
  pinMode (ir,INPUT);
  pinMode (ir1,INPUT);
  pinMode (ir2,INPUT);
  pinMode (ir3,INPUT);
  pinMode (ir4,INPUT);
  pinMode (ir5,INPUT);
  pinMode (ir6,INPUT);
  pinMode (ir7,INPUT);
  pinMode (ir8,INPUT);
  pinMode (ir9,INPUT);
 
 
  

}
void loop()
{
 Serial.println(analogRead(A10));
  int ldrStatus = analogRead (ldr);
    if (ldrStatus <=500)
     {
       
       digitalWrite(led, HIGH);
       analogWrite(led,255/5);
       
       digitalWrite(led1, HIGH);
       analogWrite(led1,255/5);
       
       digitalWrite(led2, HIGH);
       analogWrite(led2,255/5); 
       
       digitalWrite(led3, HIGH);
       analogWrite(led3,255/5); 
   
       digitalWrite(led4, HIGH);
       analogWrite(led4,255/5);
      
       digitalWrite(led5, HIGH);
       analogWrite(led5,255/5);

       digitalWrite(led6, HIGH);
       analogWrite(led6,255/5);

       digitalWrite(led7, HIGH);
       analogWrite(led7,255/5);

       digitalWrite(led8, HIGH);
       analogWrite(led8,255/5);

       digitalWrite(led9, HIGH);
       analogWrite(led9,255/5);
       
       
       
        if (analogRead(A0)<300)       // IR 1 CODE    
               {
                digitalWrite(led,HIGH);
                analogWrite(led,255);       
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led,HIGH);
                  analogWrite(led,255/5);
                  
                }
       
       
       if (analogRead(A1)<300)       // IR 1 CODE    
               {
                digitalWrite(led1,HIGH);
                analogWrite(led1,255);       
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led1,HIGH);
                  analogWrite(led1,255/5);
                  
                }
          
          if (analogRead(A2)<300)           // IR 2 CODE
               {
                digitalWrite(led2,HIGH);
                analogWrite(led2,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led2,HIGH);
                   analogWrite(led2,255/5); 
                  
                }
                
           if (analogRead(A3)<300)           // IR 3 CODE
               {
                digitalWrite(led3,HIGH);
                analogWrite(led3,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led3,HIGH);
                   analogWrite(led3,255/5); 
                  
                }
                
            if (analogRead(A4)<300)           // IR 4 CODE
               {
                digitalWrite(led4,HIGH);
                analogWrite(led4,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led4,HIGH);
                   analogWrite(led4,255/5); 
                  
                }
                
             if (analogRead(A5)<300)           // IR 5 CODE
               {
                digitalWrite(led5,HIGH);
                analogWrite(led5,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led5,HIGH);
                   analogWrite(led5,255/5); 
                  
                }
                
             if (analogRead(A6)<300)           // IR 6 CODE
               {
                digitalWrite(led6,HIGH);
                analogWrite(led6,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led6,HIGH);
                   analogWrite(led6,255/5); 
                  
                }

             if (analogRead(A7)<300)           // IR 7 CODE
               {
                digitalWrite(led7,HIGH);
                analogWrite(led7,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led7,HIGH);
                   analogWrite(led7,255/5); 
                  
                }

            if (analogRead(A8)<300)           // IR 8 CODE
               {
                digitalWrite(led8,HIGH);
                analogWrite(led8,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led8,HIGH);
                   analogWrite(led8,255/5); 
                  
                }

            if (analogRead(A9)<300)           // IR 8 CODE
               {
                digitalWrite(led9,HIGH);
                analogWrite(led9,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led9,HIGH);
                   analogWrite(led9,255/5); 
                  
                }
     }
           
     else 
       {

         digitalWrite(led, LOW);
         digitalWrite(led1, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led6, LOW);
         digitalWrite(led7, LOW);
         digitalWrite(led8, LOW);
         digitalWrite(led9, LOW);
         
      }
   
}
