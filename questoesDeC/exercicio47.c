#include <stdio.h>

main(){

    int n;
    int termo_inicial = 0;
    int termo_seguinte = 1;
    int auxiliar;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        printf(" %d ",termo_inicial);

        auxiliar = termo_seguinte;
        termo_seguinte += termo_inicial;
        termo_inicial = auxiliar;

    }
      
}