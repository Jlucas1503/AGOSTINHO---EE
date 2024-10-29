#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str) {
    // Agora estamos alterando o ponteiro original
    (*str)++;
}

int main() {
    char *str;
    str = (void *)malloc(50 * sizeof(char));  // Aloca memória para a string
    strcpy(str, "Agostinho");  // Copia "Agostinho" para a string alocada
    funcao(&str);  // Chama a função e altera o ponteiro original para apontar para "gostinho"
    puts(str);  // Agora imprime "gostinho"
    free(str);  // Libera a memória alocada
    return 0;
}
