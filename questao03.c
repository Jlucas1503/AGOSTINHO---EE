#include <stdio.h>
int main(){
  int i, j, *p, *q;
  
  p = &i; 
  // Linha 3 - P não foi declarado
  
  *q = &j;
  // linha 6 - q não foi declarado, além disso *q guardaria apenas valores interios, enquanto &J é um endereço.
  
  p = &*&i;
  // linha 9 
  
  i = (*&)j;
  // parenteses precisariam estar cobrindo o j
  i = *&j;
  
  
  i = *&*&j;
  
  q = *p;
  // a variavel só armazena um endereço para inteiro.
  i = (*p)++ + *q;

}
