#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

    srand( (unsigned)time(NULL) );
    int numero_gerado = rand() % 100;
    int numero;
    int n = 0;
    printf("%d\n",numero_gerado);
    while (1)
    {
        printf("Digite o numero: ");
        scanf("%d",&numero); 

        

        if (numero > numero_gerado){
            printf("MENOR\n");
            n++;
            continue;
        } else if (numero < numero_gerado){
            printf("MAIOR\n");
            n++;
            continue;
        }else if (numero == numero_gerado){
            n++;
            printf("\nVoce acertou o numero em %d tentativas",n);
            break;
        }
        
    }
    
    
}