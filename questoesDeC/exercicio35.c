#include <stdio.h>
#include <math.h>

main(){

    int primeiro_termo;
    int razao;
    int limite;
    int n = 2;
   
    
    printf("Digite o primeiro termo: ");
    scanf("%d",&primeiro_termo);
    int termo = primeiro_termo;
    printf("Digite a razao: ");
    scanf("%d",&razao);

    printf("Digite o limite: ");
    scanf("%d",&limite);
    
    while (termo <= limite)
    {
        
        printf("%d\n",termo);
        termo =  primeiro_termo * (pow(razao,(n-1)));
        
        n++;
        
        
    }
    
    
   

}