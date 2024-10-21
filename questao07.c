#include <stdio.h>

int main(void){
    
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  

  
  printf("contador/valor/valor/endereco/endereco\n\n");
  
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf("\n vet[%d] = %.1f",i, vet[i]);
  printf("\n *(f + %d) = %.1f",i, *(f+i));
  printf("\n &vet[%d] = %X",i, &vet[i]);
  printf("\n (f + %d) = %X",i, f+i);
  printf("\n\n");
  }
}


/* o programa cria um contador, e um vetor vet que assume em cada loop a posição indicada pelo contator. Após isso, ele mostra o valor armazenado em cada posição do vetor e logo após o endereço de cada posição do vetor   */
