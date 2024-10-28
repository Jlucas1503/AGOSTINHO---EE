#include <stdio.h>
int main(){
  int i = 3, j = 5, *p, *q; // variaveis que eu mesmo atribuí, não sao originais do programa
  
  p = &i; // correto
  
  *q = &j;
  // *q guardaria apenas valores interios, enquanto &J é um endereço. erro 
  
  p = &*&i;
  // *&i indicaria o proprio i, então quando eu adiciona um & antes, é a mesma coisa de escrever o endereço de i(&i)
  printf("P = %d\n", *p);
  
  
  i = (*&)j;
  // parenteses precisariam estar cobrindo o j. esse comando simplesmente nao é reconhecido pelo c

  
  i = *&j; //essa seria a maneira correta de desreferenciar o endereço de j.
  printf("i = %d\n", i);
  
  
  i = *&*&j; // correto, *&*&j é mesma coisa de escrever apenas j
  printf("i = %d\n", i);
  
  q = *p;
  // a variavel só armazena um endereço de inteiro. ERRO
  
  i = (*p)++ + *q; // correto apenas se q estiver apontando tambem para um valor inteiro
  

}
