int button1 =0;
int button2 =0;
void setup()
{
  //For the pushbuttons 
  pinMode(8,INPUT);
  pinMode(7,INPUT);
  //For Motor 1 
  pinMode(10, OUTPUT);//Enable 1 for M1
  pinMode(6, OUTPUT);//Input 1 for M1 
  pinMode(5, OUTPUT);//Input 2 for M1 
  //For Motor 2 
  pinMode(11, OUTPUT);//Enable 2 for M2
  pinMode(4, OUTPUT);//Input 3 for M2 
  pinMode(3, OUTPUT);//Input 4 for M2 
}

void loop()
{
    button1 = digitalRead(8);
    button2 = digitalRead(7);
  //For clockwise movement 
  if ( button1 == HIGH )
  {
    //Motor1
    digitalWrite ( 6 , HIGH);
    digitalWrite ( 5 , LOW );
    digitalWrite ( 10 , HIGH );
    //Motor2
    digitalWrite ( 4 , HIGH);
    digitalWrite ( 3 , LOW );
    digitalWrite ( 11 , HIGH );
  }
  else 
  {
    //Stop movement 
    digitalWrite ( 10 , LOW );
    digitalWrite ( 11 , LOW );
  
  }
  //For counterclockwise movement 
  if ( button2 == HIGH  )
  {
    //Motor1
    digitalWrite ( 6 , LOW);
    digitalWrite ( 5 , HIGH);
    digitalWrite ( 10 , HIGH );
    //Motor2 
    digitalWrite ( 4 , LOW );
    digitalWrite ( 3 , HIGH );
    digitalWrite ( 11 , HIGH );
  }
 else 
 {
   //Stop movement
   digitalWrite ( 10 , LOW );
   digitalWrite ( 11 , LOW );
 } 
}