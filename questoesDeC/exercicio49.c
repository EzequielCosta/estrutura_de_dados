#include <stdio.h>

main(){

    int n;
    double salario_total = 0;
    int numero_filhos_total = 0;
    double salario_acima_1000 = 0;

    double salario_habitante = 1.6;
    int numero_filhos_habitante = 0;

    printf("Digite o numero de habitantes: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        salario_habitante = 0.0;
        numero_filhos_habitante = 0;

        printf("\nDigite o salario do %d habitante: ",i);
        scanf("%Le",&salario_habitante);

        printf("\nDigite a quantidade de filhos do %d habitante: ",i);
        scanf("%d",&numero_filhos_habitante);

        if (salario_habitante >= 1000){
            salario_acima_1000++;
        }

        salario_total += salario_habitante;
        numero_filhos_total += numero_filhos_habitante;

    }
   
    double media_salarios = salario_total / n;
    double media_num_filhos = ((double) numero_filhos_total) / n;
    double percentual_pessoa_acima_1000 = (salario_acima_1000 / n) * 100;

    printf("\nA media de salario com aproximacao de duas casas eh: %.2f",media_salarios);
    printf("\nA media de numero de filhos com aproximacao de duas casas eh: %.2f",media_num_filhos);
    printf("\nA porcentagem de pessoas que ganham mais de 1000 com aproximacao de duas casas eh: %.2f",percentual_pessoa_acima_1000);
    
}