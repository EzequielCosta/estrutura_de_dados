#include <stdio.h>

main(){

    char nome_produto[10];
    double preco_produto;
    int quantidade_comprada;
    char *a;
    

    while (1==1)
    {
        printf("Digite o nome do produto: ");
        scanf("%s",&nome_produto); 

        if (strcmp (nome_produto, "FIM") == 0){
            break;
        }  

        printf("Digite o preco do produto: ");
        scanf("%lf",&preco_produto);   
        
        printf("Digite a quantidade comprada: ");
        scanf("%d",&quantidade_comprada);   

        double valor_total = preco_produto * quantidade_comprada;
        if (quantidade_comprada >= 11 && quantidade_comprada <= 20){
            valor_total = valor_total  * 0.9;
        }else if (quantidade_comprada >= 21 && quantidade_comprada <= 50){
            valor_total = valor_total  * 0.8;
        }else if (quantidade_comprada > 50){
            valor_total = valor_total  * 0.75;
        }
        
        printf("\nO nome do produto eh: %s\n",nome_produto);
        printf("A quantidade eh: %d\n",quantidade_comprada);
        printf("O valor total eh: %2.f\n",valor_total);

    }
    
    
}