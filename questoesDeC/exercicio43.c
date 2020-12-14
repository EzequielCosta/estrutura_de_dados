#include <stdio.h>

main(){

    int n;
    int maior = 0;
    int numero;
    int num_dependentes;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        printf("\nDigite o %d numero: ",i);
        scanf("%d",&numero);
        soma += numero;

    }
    double media = ((double) soma / n);
    printf("\nA soma eh %d",soma);
    printf("\nA media com aproximacao de 2 casas eh %.2f\n",media);
      
}