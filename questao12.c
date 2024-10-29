 #include <stdio.h>
 
 void main(){
int const *x = 3; 
 
 
 
// o tipo de variavel const faz com que a variavel se torne constante, ou seja, não possa ser alterada  


 printf("%d", ++(*x)); // erro, por x ser uma variavel constante, ela n pode receber o incremento ++
 
 }
