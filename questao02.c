#include <stdio.h>
int main(){
  int i=5, *p;
  
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}


/* Mostre o que será impresso pelo programa supondo que a variável i ocupa o endereço 4094 na
memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho :

Resposta: 
- endereço da variável de I: 4094
- Inteiros valem 2 bytes ao inves de 4 bytes

Output: 4094 4096 7 5 15 9 
