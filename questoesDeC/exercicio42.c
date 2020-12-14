#include <stdio.h>
#include <math.h>
main(){

    int n;
    int limiteSuperior = 0;
    int limiteInferior = 0;
    

    printf("Digite o limite Inferior: ");
    scanf("%d",&limiteInferior);

    printf("Digite o limite Superior: ");
    scanf("%d",&limiteSuperior);

    for (int i = limiteInferior; i <= limiteSuperior; i++){
        
        if (ehPrimo(i)){
            printf("%d\n",i);
        }
    }  
}

int ehPrimo(numero){
    int raizDeNumero = (int) sqrt(numero);
    
    for(int i = 2; i < (raizDeNumero + 1); i++ ){
        if (numero % i == 0){
            return 0;
        }
    }
    return 1;
}