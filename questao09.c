/******************************************************************************

    questao 09

*******************************************************************************/

#include <stdio.h>

int main(){
    int mat[4], *p, x;

    mat[0] = 3;
    mat[1] = 5;    
    p = mat + 1;  // Válido, pois p assume o primeiro endereço do array mat, e "pula" um endereço
    printf("%p\n", p);
    
    
   // p = mat++; // o incremento não é possivel, pois estamos tentando incrementar um array, e isso não é possivel em c 
  //  printf("%p", p);
    
   // p = ++mat; //  o incremento não é possivel, pois estamos tentando incrementar um array, e isso não é possivel em c
   // printf("%p", p);
    
    x = (*mat); // valido pois mat é um array, e quando desreferenciamos com *, estamos atribuindo a variavel x o primeiro elemento desse array
    printf("%d", x); // 
    return 0;
}
