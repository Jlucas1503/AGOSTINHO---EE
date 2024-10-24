/* respondendo a questão: 
x+1, x+2, x+3

Se  x for declarado como char:

x + 1 = 4093
x + 2 = 4094
x + 3 = 4095

Se x for declarado como int:

x + 1 = 4094
x + 2 = 4096
x + 3 = 4098

Sex for declarado como float:
x + 0 = 4092
x + 1 = 4096
x + 2 = 4100
x + 3 = 4104


Se x for declarado como double:
x + 0 = 4092
x + 1 = 4100
x + 2 = 4108
x + 3 = 4116

OBS: Pra garantir que um int tenha apenas 2 bytes (16 bits), você pode usar tipos definidos na biblioteca padrão stdint.h. Aqui está como fazer isso:
OBS2: usarei o tamanho de variável padrao do C.(char = 1 byte // int = 4bytes // float = 4bytes // double = 8 bytes)
*/


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    char y[4], *ptry;
    ptry = y;
    
    
    printf("CHAR\nendereço de y:\n%p\n", ptry);
    printf("endereço de y + 1:\n%p\n\n\n", ptry + 1);
    
    
    int x[4], *ptrx;
    ptrx = x;
    
    
    printf("INT\nendereço de x:\n%p\n", ptrx);
    printf("endereço de x + 1:\n%p\n\n\n", ptrx + 1);
    
    
    float z[4], *ptrz;
    ptrz = z;
    
    
    printf("FLOAT\nendereço de z:\n%p\n", ptrz);
    printf("endereço de z + 1:\n%p\n\n\n", ptrz + 1);
    
    
    
    double w[4], *ptrw;
    ptrw = w;
    
    
    printf("DOUBLE\nendereço de w:\n%p\n", ptrw);
    printf("endereço de w + 1:\n%p\n\n\n", ptrw + 1);
    
    
    return 0;
}


