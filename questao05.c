#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void funcao(char** str){
  str++;
}
int main(){
  char *str = (void *)malloc(50*sizeof(char));
  strcpy(str, "gostinho");
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}
/*O problema está na função de fora. Quando str é passado para a função funcao, é passado por referência (o endereço do ponteiro). No entanto, ao incrementar str na linha str++;, o ponteiro localmente dentro da função é incrementado, mas a modificação não afeta o ponteiro original no main. Portanto, quando puts(str); é executado, o ponteiro ainda aponta para a string original "Agostinho", e não a "gostinho" como esperado.

.*/
