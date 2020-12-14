#include <stdio.h>

int main(){

    int opniao = 0;
    int idade = 0;
    int soma_idade_otimo = 0;
    int quantidade_pessoas_otimo = 0;
    int quantidade_pessoas_regular = 0;
    int quantidade_pessoas_bom = 0;
    int quantidade_total_pessoas = 0;
    
    // media_idade_otimo = (soma_idade_otimo) / (quantidade_pessoas_otimo);
    // quantidade_pessoas_regular;
    // percentual_bom = (quantidade_pessoas_bom) / quantidade_total_pessoas;
    
   while(1){

       /*  printf("Digite o sexo (1=Masculino, 2=Feminino): ");
        scanf("%d",&sexo); 
 */
        printf("Digite a idade: ");
        scanf("%d",&idade); 

        if (idade == -1){
            break;
        }

        printf("Digite a opiniao (1=otimo, 2=bom, 3=regular, 4=pessimo): ");
        scanf("%d",&opniao);
        printf("\n");

        if (opniao == 1){
            soma_idade_otimo += idade;
            quantidade_pessoas_otimo++;
        }else if(opniao == 3){
            quantidade_pessoas_regular++;
        }else if(opniao == 2){
            quantidade_pessoas_bom++;
        }

        quantidade_total_pessoas++;   
    }
    //printf("%d\n",quantidade_mulheres_solteiras);
    //printf("%d\n",quantidade_total_mulheres);
    //printf("%d\n",quantidade_total_homens);
    //printf("\n");
    //printf("%d\n",quantidade_total_homens);

    double media_idade_otimo = (soma_idade_otimo ? media_idade_otimo = (soma_idade_otimo) / (quantidade_pessoas_otimo) : 0);

    double percentual_bom = (((double) quantidade_pessoas_bom) / quantidade_total_pessoas ) * 100;

    printf("A media das idades das pessoas que responderam otimo eh: %2.f\n",media_idade_otimo);
    printf("A quantidade de pessoas que respondeu regular: %d\n",quantidade_pessoas_regular);
    printf("O percentual de pessoas que respondeu bom entre os entrevistados:  %2.f\n",percentual_bom);

    return 0;
       
}   