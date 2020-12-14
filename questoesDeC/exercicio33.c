#include <stdio.h>

main(){

    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++){
        if ( i % 2 == 0){
            printf("%d\n",i);
        }
    }  

    
}