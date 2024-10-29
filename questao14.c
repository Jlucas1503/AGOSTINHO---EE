#include <stdio.h>

/* obs: o valor retornado na questao não é 19, e sim 22 */



int f(int a, int *pb, int **ppc) { // a função tem como parametros: a(que assume o valor de c), *pb(que assume o endereço apontado por b) e **ppc(que assume o ponteiro para ponteiro a)
  int b, c;
  
  **ppc += 1; // aqui acontece um incremento. ppc assume a variavel "a" da função main, que por sua vez aponta para o endereço de outro ponteiro(b), que por sua vez aponta pra o endereço de c.
  
  printf("ppc:%d\n", **ppc);
  
  c = **ppc; // c recebe o valor de **ppc(6)
  
  
  
  *pb += 2; // pb assume "b" da função main, que aponta para o endereço de c. Portanto na linha, *pb = 8(c que agora é 6, + 2 = 8)
  
  printf("pb:%d\n", *pb);
  
  b = *pb; //b assume o novo valor de pb que é 8
  
  a += 3; // a assume o valor de c na função main, e soma 3, logo a = 8
  
  return a + b + c;
}
void main() {
  
  int c, *b, **a; // c é uma varaivel inteira, b é um ponteiro para inteiro, c é um ponteiro de ponteiro para inteiro
  
  c = 5;
  
  b = &c; // b aponta para o endereço de c
  
  a = &b; // a aponta para o endereço do ponteiro b(por isso é um ponteiro para ponteiro)
  
  printf("%d\n", f(c, b, a)); // chama a funçao f
  
  getchar();
}
