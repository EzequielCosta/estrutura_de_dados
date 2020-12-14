#include <stdio.h>

main(){

    int n;
    int maior = 0;
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        printf("\nDigite o %d numero: ",i);
        scanf("%d",&numero);

        if (numero > maior){
            maior = numero;
        }

    }
    printf("\nO maior numero foi %.2d\n",maior);
      
}