#include <stdio.h>
int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("a:%d \n", valor);  /* vai retornar o valor 20 */
  
  
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("b:%.1f \n", temp);  /* vai retornar o valor 29.0 */
  
  
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("c:%c \n", aux); /* Vai retornar o character "P", pois "nome" é um ponteiro para char, que guarda um array de char's*/


  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("d:%c \n", aux); /* vai retornar o character "e" */
  
  /* (e) */
  p3 = nome;
  printf("e:%c \n", *p3); /*Vai retornar o character "P", pois tanto p3 quanto "nome" são ponteiros para char, porem quando imprimimos o valor de *p3, ele nos dá um primeiro elemento do array de char's              */
  
  
  /* (f) */
  p3 = p3 +4;
  printf("F:%c \n", *p3); /*Como p3 recebeu o endereço da variavel nome na alternativa anterior, ele assume o endereço do array de char's. Então p3 vai assumir o primeiro elemento de nome e pular 3
  endereços: logo o resultado é a letra "e".
  
  Obs: se o programa fosse apenas a alternativa (f), o programa não resultaria nada, pois p3 não teria nenhum valor atribuido, seria apenas um ponteiro apontando para ninguem.
  
  */
  
  
 /* (g) */
  p3--;
  printf("G:%c \n", *p3); /* considerando a alternativa anterior(f), em que p3 assume o endereço da letra e, o resultado desse programa é a letra t*/
  
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("H:%d \n", idade); // idade: 31, pois p4 aponta para o primeiro elemento de vetor, e idade assume o valor do conteudo de p4(*p4).
  
  /* (i) */
  p5 = p4 +1;
  idade = *p5;
  printf("i:%d \n", idade); //idade: 45, pois p4 aponta para o primeiro elemento de vetor, p5 pula um endereço de vetor e idade assume o valor do conteudo de p5(*p5).
  
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("J:%d \n", idade); //idade: 27, pois p5 aponta para o segundo elemento de vetor, p4 assume o endereço de p5 e idade assume o valor do conteudo de p4(*p4).
  
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("l:%d \n", idade); //idade: 31, pois p4 aponta para o terceiro valor de vetor, e depois disso volta 2 endereços(volta para vetor[0]) e idade assume o valor do conteudo de p4(*p4)
  
  /* (m) */
  p5 = &vetor[2]-1;
  printf("m:%d \n", *p5); // resultado é 45, pois p5 aponta para o endereço do segundo elemento do vetor(vetor[2]), depois volta um endereço(vetor[1]).
  
  /* (n) */
  p5++;
  printf("N:%d \n", *p5); //resultado é 27, pois p5 agora aponta para o endereço do vetor[3] que é 27.
  
  
  return(0);
  
}
  
