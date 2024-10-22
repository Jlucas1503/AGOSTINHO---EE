/******************************************************************************

                          q10

*******************************************************************************/

#include <stdio.h>
/*
************************

int main()
{

  int vet[] = {4, 9, 13}; // esse codigo print, dentro de um loop for, o valor do primeiro endereço de vet pulando a quantidade de endereços referenciado pelo contador i
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
}
 

    return 0;
} 




********************
*/


int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
    printf("%p\n", vet+i); //essa funcao faz similar a anterior, mas em vez de retornar o valor do endereço, me mostra o prórpio endereço do array de acordo com o indice indicado pelo contador(vet[0, vet[1]...])
  }
  
  
  
  return 0;
}
