#include <stdio.h>

main(){

    int n;
    int termo_inicial = 1;
    int razao = 2;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        printf(" %d ",termo_inicial);

        termo_inicial += razao;
        razao++;
        

    }
      
}