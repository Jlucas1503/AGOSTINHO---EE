/* resposta da questao
Um memory leak ocorre quando um programa reserva memória usando malloc mas depois esquece de liberar essa memória quando termina a execução da alocação(usando o free). Isso significa que a memória fica alocada, mas o programa não tem mais acesso a ela, causando desperdício de memória. Se isso acontecer repetidamente, pode levar o programa a consumir toda a memória disponível. 


*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocando memória para uma matriz de ordem 2
    int **matriz; /* variavel que vai guardar nossa matriz. ela é um ponteiro para ponteriro , pois estamos lidando com uma matriz bidimensional.
    
    enquanto "as linhas" são apontadas por int**, os elementos das linhas são apontados por int*
    
    
    */
    matriz = (int **)malloc(2 * sizeof(int *)); /* array de ponteiros: o tamanho da memoria alocada é a quantidade de linhas X o tamanho de um inteiros(pois nossa matriz é de inteiros)*/
    for (int i = 0; i < 2; i++) {
        matriz[i] = (int *)malloc(2 * sizeof(int)); // malloc para alocar memoria para os elementos da matriz, indicados por (int *)
    }

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < 2; i++) {
    //     free(matriz[i]); // um laço de rep que limpa a memoria usada pelo array de linhas(elementos das linhas)
    // }
    // free(matriz); // elimina a memoria usada pelo array de ponteiros(as linhas da matriz);
    
    /*obs, aqui esquecemos de liberar a memoria. o programa funcionara normalmente, mas a memoria sempre estará ocupada.*/

    return 0;
}
