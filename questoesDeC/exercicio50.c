#include <stdio.h>

main(){

    int n;
    int candidato_1 = 0,candidato_2 = 0,candidato_3 = 0, nulo = 0, branco = 0,voto = 0;
    printf("Digite o numero de eleitores: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        printf("\nDigite o voto do %d eleitor: ",i);
        scanf("%d",&voto);

        if (voto == 1){
            candidato_1++;
        }else if(voto == 2){
            candidato_2++;
        }else if (voto == 3){
            candidato_3++;
        }else if(voto == 9){
            nulo++;
        }else if (voto == 0){
            branco++;
        }
    }

    printf("\nA quantidade de votos para o candidato 1 eh: %d",candidato_1);
    printf("\nA quantidade de votos para o candidato 2 eh: %d",candidato_2);
    printf("\nA quantidade de votos para o candidato 3 eh: %d",candidato_3);
    printf("\nA quantidade de votos nulos eh: %d",nulo);
    printf("\nA quantidade de votos em branco eh: %d",branco);
}