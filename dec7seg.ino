int Digit0 = 0;
int Digit1 = 1;

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

int contador1 = 0;
int contador2 = 0;
int contador3 = 0;



void setup() {
  for (int i=0; i<9; i++){
    pinMode(i, OUTPUT);
}

}

void loop() {
  
  for(contador2 = 0; contador2<16; contador2++){
    for(contador1 = 0; contador1<16; contador1++){
      for(contador3=0; contador3<20; contador3++){
        multiplexer(0);
        dec7seg(contador1);
        delay(10);
        multiplexer(1);
        dec7seg(contador2);
        delay(10);
      }
      
    }
  }
}

void dec7seg(int n){
      
    if(n==0){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, LOW);
      }

      else if(n==1){
      digitalWrite(A, LOW); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, LOW);digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
      }

      else if(n==2){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, LOW);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, LOW);digitalWrite(G, HIGH);
      }

      else if(n==3){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, HIGH);
      }

      else if(n==4){
      digitalWrite(A, LOW); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, LOW);digitalWrite(E, LOW);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }

      else if(n==5){
      digitalWrite(A, HIGH); digitalWrite(B, LOW);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, LOW);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }

      else if(n==6){
      digitalWrite(A, HIGH); digitalWrite(B, LOW);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }

      else if(n==7){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, LOW);digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
      }
      
      else if(n==8){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }
      
      else if(n==9){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, LOW);digitalWrite(E, LOW);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }
      
      else if(n==10){
      digitalWrite(A, HIGH); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, LOW);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }
      
      else if(n==11){
      digitalWrite(A, LOW); digitalWrite(B, LOW);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }
      
      else if(n==12){
      digitalWrite(A, HIGH); digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, LOW);
      }
      
      else if(n==13){
      digitalWrite(A, LOW); digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, LOW);digitalWrite(G, HIGH);
      }
      
      else if(n==14){
      digitalWrite(A, HIGH); digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }
      
      else if(n==15){
      digitalWrite(A, HIGH); digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
      }

     
      
  }

  void multiplexer(int n){
    if(n==0){
      digitalWrite(Digit0, HIGH); digitalWrite(Digit1, LOW);
    }
    
    if(n==1){
     digitalWrite(Digit1, HIGH); digitalWrite(Digit0, LOW);
    }
    }
