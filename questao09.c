/******************************************************************************

    questao 09

*******************************************************************************/

#include <stdio.h>

int main(){
    int mat[4], *p, x;

    p = mat + 1;  // Válido, pois p assume o primeiro endereço do array mat, e "pula" um endereço
    printf("%p\n", p);
    
    
   // p = mat++; // a linha teoricamente faz p assumir o valor do primeiro endereço + 1 (mat = mat+1) - incremento
  //  printf("%p", p);
    
   // p = ++mat; // 
   // printf("%p", p);
    
    x = (*mat); // 
    printf("%d", x);
    return 0;
}
