#include <stdio.h>

int main(){

    int sexo = 0;
    int idade = 0;
    int estado_civil = 0;
    int quantidade_total_mulheres = 0, quantidade_total_homens = 0;
    double percentual_mulheres_solteiras, percentual_homens_solteiros;
    int quantidade_mulheres_divorciadas = 0;
    int quantidade_homens = 0 , quantidade_mulheres = 0;
    int soma_idade_mulheres = 0, soma_idade_homens = 0;
    int quantidade_homens_solteiros = 0, quantidade_mulheres_solteiras = 0 ;
    


    // media idade mulheres = (total_idades) / quantidade_total_mulheres ;
    // media idade homens = (total_idades) / quantidade_total_homens ;
    // percentual homens solteiros = ((quantidade_homens_solteiros) / quantidade_total_homens) * 100 ;
    // percentual mulheres solteiros = ((quantidade_mulheres_solteiras) / quantidade_total_mulheres) * 100 ;
    
    for (int i = 1; i <= 3; i++){

        printf("Digite o sexo (1=Masculino, 2=Feminino): ");
        scanf("%d",&sexo); 

        printf("Digite a idade: ");
        scanf("%d",&idade); 

        printf("Digite o estado civil (1=Casado, 2=Solteiro, 3=Divorciado, 4=Viuvo): ");
        scanf("%d",&estado_civil);
        printf("\n");

        if (sexo == 2){
            quantidade_total_mulheres++;
            if (estado_civil == 2){ // se for solteira
                quantidade_mulheres_solteiras++; 
            }
            if (estado_civil == 3 && idade > 30){ // se for divorciada
                quantidade_mulheres_divorciadas++;
            }
            soma_idade_mulheres += idade;
            
        }else if(sexo == 1){
            quantidade_total_homens++;
            if (estado_civil == 2){ // se for solteiro
                quantidade_homens_solteiros++;
            }

            soma_idade_homens += idade;
            
        }
        
       
        
        //percentual_mulheres_solteiras = (percentual_mulheres_solteiras / 100) * 100;        
    }
    printf("%d\n",quantidade_mulheres_solteiras);
    printf("%d\n",quantidade_total_mulheres);
    //printf("%d\n",quantidade_total_homens);
    printf("\n");
    //printf("%d\n",quantidade_total_homens);

    double media_idade_mulheres = ( quantidade_total_mulheres != 0 ? soma_idade_mulheres / quantidade_total_mulheres : 0 );
    double media_idade_homens = ( quantidade_total_homens != 0 ? soma_idade_homens / quantidade_total_homens : 0 );
    percentual_homens_solteiros = (quantidade_total_homens !=0 ? ((double) quantidade_homens_solteiros / quantidade_total_homens) * 100 : 0);
    percentual_mulheres_solteiras = (quantidade_total_mulheres !=0 ? ((double) quantidade_mulheres_solteiras / quantidade_total_mulheres) * 100 : 0);
    
    printf("A media da idade dos homens eh: %2.f\n",media_idade_homens);
    printf("A media da idade das mulheres eh: %2.f\n",media_idade_mulheres);    
    printf("O percentual de homens solteiros eh: %2.f\n",percentual_homens_solteiros);
    printf("O percentual de mulheres solteiras eh: %2.f\n",percentual_mulheres_solteiras);
    printf("A quantidade de mulheres divorciadas eh: %d",quantidade_mulheres_divorciadas);

    return 0;
       
}