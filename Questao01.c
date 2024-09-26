#include <stdio.h>

int main(void) {
  int i=3,j=5;
  int *p, *q;
  p = &i;
  q = &j;


  printf("%d\n", p == &i );
/* apenas uma comparação de variáveis. O resultado é 1, indicando que é true */
  printf("%d\n", *p - *q);
/* subtração dos valores contidos nas varíaveis apontadas por p e q respectivamente, ou seja, 'i - j = -2' */
  printf("%d\n", **&p);
/* lemos da direta para a esquerda. o primeiro asterisco indica o valor armazena no endereço do ponteiro p, que é igual ao endereço de i. já o segundo asterisco indica o valor armazendo na variavel apontada por p, ou seja, i. */
  printf("%d\n", 3 - *p/(*q) + 7);
  return 0;
}
