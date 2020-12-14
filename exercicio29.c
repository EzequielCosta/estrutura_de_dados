#include <stdio.h>
#include <math.h>

main(){

    double valor_investimento;
    double taxa_juros_mensal;
    char opcao = 'N';


    printf("Digite quanto sera investido por mes: ");
    scanf("%lf",&valor_investimento); 

    
    printf("Digite a taxa de juros mensal: ");
    scanf("%lf",&taxa_juros_mensal);   
    
    while(1)
    {   
        double juros = pow((1+(taxa_juros_mensal/100)),12);

        double montante = valor_investimento * juros;
        printf("\nO valor eh %.2f\n",juros);
        printf("\nO valor eh %.2f\n",valor_investimento);
        printf("\nO valor apos 1 ano eh: %.2f\n",montante);
        valor_investimento = montante;

        printf("\nDeseja processar mais um ano (S/N)?: ");
        scanf("%c",&opcao);   

        if (opcao == 'N'){
            break;
        }

       

        
    }
    
    
}