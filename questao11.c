#include <stdio.h>


 struct teste{
 int x = 3; // não posso fazer uma atribuiçao de um valor a uma variavel dentro do struct
 char nome[] = "jose";
 };
 
 
 
 
 
int main(){ // erro nessa linha, pois é preciso do int antes de chamar a função main
 struct teste *s; //erro, pois o ponteiro nao foi atribuido antes.
 
 
 
 
 printf("%d", s->x); //erro pois a atribuição de valor não pode acontecer dentro de um printf, é preciso atribuir antes.
 
 printf("%s", s->nome);
 
 }
