#include <stdio.h>

main(){

    int n;
    int limiteSuperior = 0;
    int limiteInferior = 0;
    

    printf("Digite o limite Inferior: ");
    scanf("%d",&limiteInferior);

    printf("Digite o limite Superior: ");
    scanf("%d",&limiteSuperior);

    printf("Digite um numero: ");
    scanf("%d",&n);


    for (int i = limiteInferior+1; i < limiteSuperior; i++){
        
        if (i % n == 0){
            printf("%d\n",i);
        }
    }  
}