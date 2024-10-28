
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


void comparar(const void *a, const void *b){
    if(*(float*)a > *(float*)b){
        return 1;
    }
        
    else if((float*)a < (float*)b){
        return -1;
    }   
    
    else{
        return 0;
    }
    

}



int main(){
    
    int n;  // n valores
    float *meumalloc;
    printf("Digite a quantos valores deseja:\n");
    
    scanf("%d", &n);
    
    meumalloc = (float *)malloc(n * sizeof(float));
    
    
    
    printf("Agora, digite quais os %d valores em float você quer:\n", n);
    
    for(int i = 0; i< n; i++){
        scanf("%f", &meumalloc[i]);
        
    };
    
    
    // agora chamamos a função qsort para iniciar a comparação
    
    qsort(meumalloc, n, sizeof(float), comparar);
    
    
    for(int i = 0; i < n ; i++){
        printf("%.f", meumalloc[i]);
    }
    
    free(meumalloc);

    return 0;
}
