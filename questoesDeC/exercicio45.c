#include <stdio.h>

main(){

    int n;
    int termo_inicial = 1;
    int cont = 1;

    printf("Digite um numero: ");
    scanf("%d",&n);

    while (1==1)
    {
        if ((cont * cont) > n){
            cont--;
            break;
        }else if((cont*cont) == n){
            cont;
            break;
        }
        cont++;
    }

    printf("%d",(cont)*(cont));
    
         
}