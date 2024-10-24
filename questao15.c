#include <stdio.h>

int main(){
    
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  printf("%p, %p, %p", x+3, *(x+3), *(x+2)+3);
  
  return 0;
}

/* o resultado da compilação do programa é: 
1 - o endereço do primeiro elemento da linha quatro(x[3][0]);
2 - colocando o asterisco antes do parenteses, estamos "desapontando" nossa matriz uma vez, ou seja
, nos mostra o primeiro elemento da linha quatro, coincidentemente igual ao primeiro elemento do print.

3 - ele "desaponta" a matriz uma vez, que nos levaria ao endereço de x[2][0], e depois soma mais 3, ou seja, pula tres endereços, que mais uma vez coincide com os outros dois*/    
