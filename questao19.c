
#include <stdio.h>
#include <stdlib.h>



/* criaremos uma função que é comumente chamada de bubbleSort */



void bubbleSort(float *meumalloc, int n) {
    int i, j;
    float temp;
    
    for (i = 0; i < n - 1; i++) { /* esse laço serve para indicar quantas "passadas maximas" o nosso array pode ter.
    Imaginemos que, numa entrada de 5 valores, o primeiro valor seja o maior dos outros n valores. Nisso precisariamos de no máximo 4 passadas(n - 1) para que esse primeiro valor vá para a ultima posição
    do nosso array   
    */
        for (j = 0; j < n - 1 - i; j++) { /* Já esse laço serve para efetuarmos a troca entre valores adjascentes*/
            if (meumalloc[j] > meumalloc[j + 1]) {
                temp = meumalloc[j];
                meumalloc[j] = meumalloc[j + 1];
                meumalloc[j + 1] = temp;
            }
        }
    }
}


int main() {
    int n; // n valores que o usuario quer
    float *meumalloc;
    printf("digite quantos valores você quer:\n");
    scanf("%d", &n);

    
    meumalloc = (float *)malloc(n * sizeof(float)); /* meumalloc vai alocar uma memoria que guarda os valores em ponteiros para float. Detalhe: o casting feito antes de malloc serve apenas como uma boa pratica de programar, mas antes mesmo o nosso ponteiro meumalloc
    já tinha recebido o tipo float.
    */
    // agora o usuario digita quais os valores que ele quer dentro da quantidade que escolheu
    printf("Digite %d valores float:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &meumalloc[i]); // ss
    }

    // proximo passo: chamar a função bubbleSort
    bubbleSort(meumalloc, n); //essa função recebe como parametro meumalloc(memoria que guarda os valores) e n(quantidade de valores)

    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f\n", meumalloc[i]);
    }

    // Liberando a memória alocada
    free(meumalloc);

    return 0;
}
