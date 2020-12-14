#include <stdio.h>

main(){

    int n;
    int soma = 0;
    printf("Digite um numero: ");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++){
        soma += i;
    }  

    printf("A soma eh: %d",soma);
}