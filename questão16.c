#include<stdio.h> 


int main(){


float aloha[10], coisas[10][5], *pf, value = 2.2;

int i=3;


aloha[2] = value; // atribui o valor de value ao enderelo da posição 2 de aloha

scanf("%f", &aloha); // não podemos dar uma entrada(scanf) a um array 

 aloha = "value"; // "value" se trata de uma string, enquanto aloha é um array de float

printf("%f", aloha); // erro, é preciso indicar qual o endereço dentro do array aloha para printar

coisas[4][4] = aloha[3]; // correto, a linha 4-coluna 4 de coisas irá receber o valor da posição 3 de aloha, isso só é possivel pois os dois são variaveis floats

coisas[5] = aloha; // erro, é preciso indicar qual o indice de aloha.não é possivel atribuir um array inteiro a um elementro de uma matriz.

pf = &value; // erro, pois pf é um ponteiro e só recebe endereços. o correto seria pf = &value

pf = aloha; // válido pois estamos atribuindo ao ponteiro pf, aloha, que serve como um ponteiro que aponta para o primeiro endereço do array.

printf("\nvalor armazenado em pf:%p", pf);

printf("\nendereço do primeiro elemento do array:%p", &aloha[0]);

return 0;

}







