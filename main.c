#include <stdio.h>

int amigos(int a, int b);

int main() {
  int a, b;
  printf("Digite um valor para a: ");
  scanf("%d", &a);
  printf("Digite um valor para b: ");
  scanf("%d", &b);
  amigos(a, b);
}

int amigos(int a, int b){
  int divA;
  int somaA = 0;
  for(divA=a-1;divA>0;divA--){
    if(a%divA==0){
      somaA += divA;
      printf("%d\t", divA);
    }
  }
  printf("\nSoma dos divisores de a: %d", somaA);

  printf("\n");
  
  int divB;
  int somaB = 0;
  for(divB=b-1;divB>0;divB--){
    if(b%divB==0){
      somaB += divB;
      printf("%d\t", divB);
    }
  }
  printf("\nSoma dos divisores de b: %d", somaB);
  if((somaA==b)&&(somaB==a)){
    printf("\nAmigos");
    return 1;   
  }
  else{
    printf("\nNão amigos");
    return 0;
  }
}