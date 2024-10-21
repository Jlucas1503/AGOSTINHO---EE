#include <stdio.h>

void funcao(char **p){
  char *t;
  
  t = (p += sizeof(int))[-1];
  
  printf("%s\n", t);
}


int main(){
    
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
  
  funcao(a);
  
  return 0;
    
}

/* a saida do programa é "gh", pois o que o programa faz é nada mais que atribuir a uma variável t, o valor armazenado no endereço  de p(que "puxa" o array a + tamanho em bytes de um ponteiro(4bytes) e logo após volta uma posição no array.)
    O t assume o primeiro valor da lista(a[0]), soma com o tamanho de um inteiro e desce uma posição([-1]).



*/
