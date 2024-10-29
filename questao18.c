/*
Um ponteiro para função em C é uma variável que armazena o endereço de uma função. Isso permite que a função seja chamada de forma indireta através do ponteiro, o que pode ser útil em várias situações*/



#include <stdio.h>

void saudacao1() {
    printf("Hello world!\n");
}

void saudacao2() {
    printf("Meu codigo aaaa\n");
}

int main() {
    // ponteiro para função que não recebe parâmetros e não retorna valor
    void (*ponteiroParaSaudacao)() = NULL;

    // Atribui a função saudacao1 ao ponteiro
    ponteiroParaSaudacao = saudacao1;
    ponteiroParaSaudacao();  // Chama a função através do ponteiro

    // Atribui a função saudacao2 ao ponteiro
    ponteiroParaSaudacao = saudacao2;
    ponteiroParaSaudacao();  // Chama a função através do ponteiro

    return 0;

}
    
