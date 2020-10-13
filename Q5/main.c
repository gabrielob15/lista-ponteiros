#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  /*printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i); //imprime o contador
  printf("vet[%d] = %.1f",i, vet[i]);//imprime o valor do vetor na posição i
  printf("*(f + %d) = %.1f",i, *(f+i));//imprime o conteúdo de f em i bytes adiante que vai mostrar o valor do vetor na posição i
  printf("&vet[%d] = %X",i, &vet[i]);//imprime o endereço do vetor na posição i
  printf("(f + %d) = %X",i, f+i);//imprime o endereço que f aponta, que é o mesmo do vetor na posição i
  }*/
  printf("%x\n",f);
}
