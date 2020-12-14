#include <stdio.h>

main(){

    int sexo = 0;
    int idade = 0;
    int estado_civil = 0;
    double media_idade_mulheres = 0, media_idade_homens = 0;
    double percentual_homens_solteiros = 0, percentual_mulheres_solteiras = 0;
    int quantidade_mulheres_divorciadas = 0;
    
    while (1)
    {
        printf("Digite o sexo: ");
        scanf("%s",&sexo); 

        printf("Digite a idade: ");
        scanf("%s",&idade); 

        printf("Digite o estado civil: ");
        scanf("%s",&estado_civil);

        if (sexo == 2){
            media_idade_mulheres++;
            if (estado_civil == 2){
                percentual_mulheres_solteiras++; 
            }
            if (estado_civil == 3 && idade > 30){
                quantidade_mulheres_divorciadas++;
            }
            
            


        }else if(sexo == 1){
            media_idade_homens++;
            if (estado_civil == 2){
                percentual_homens_solteiros++;
            }
            
        }
        
        media_idade_homens = media_idade_homens / 100;
        media_idade_mulheres = media_idade_mulheres / 100;
        //percentual_homens_solteiros = (percentual_homens_solteiros / 100) * 100;
        //percentual_mulheres_solteiras = (percentual_mulheres_solteiras / 100) * 100;        
    }

    printf("A media da idade dos homens eh: %f\n",media_idade_homens);
    printf("A media da idade dos mulheres eh: %f\n",media_idade_mulheres);    
    printf("O percentual de homens solteiros eh: %f\n",percentual_homens_solteiros);
    printf("O percentual de mulheres solteiros eh: %f\n",percentual_mulheres_solteiras);
    printf("A quantidade de mulheres divorciadas eh: %f",quantidade_mulheres_divorciadas);
       
}