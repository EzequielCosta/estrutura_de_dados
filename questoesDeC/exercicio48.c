#include <stdio.h>

main(){

    int n;
    int codigo;
    double horas_trabalhadas;
    int num_dependentes;

    printf("Digite o numero de funcionarios: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        
        printf("\nDigite o codigo do %d funcionario: ",i);
        scanf("%d",&codigo);

        printf("\nDigite a quantidade de horas trabalhadas do %d funcionario: ",i);
        scanf("%Le",&horas_trabalhadas);

        printf("\nDigite o numero de dependentes do %d funcionario: ",i);
        scanf("%d",&num_dependentes);

        double salario_bruto = (12 * horas_trabalhadas) + (40 * num_dependentes);
        double desconto_inss = salario_bruto * 0.085;
        double desconto_ir = salario_bruto * 0.05;

        printf("\nFuncionario de codigo %d",codigo);
        printf("\nPara o imposto do INSS:  %.2f",(desconto_inss));
        printf("\nPara o imposto do IR:  %.2f",(desconto_ir));
        
        printf("\nO salario liquido eh %.2f\n",(salario_bruto - (desconto_ir + desconto_inss)));
        

    }
      
}