#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*
Aula 68: estrutura de repetição do {} while(faça enquanto).
*/
int main() {
setlocale(LC_ALL,"portuguese");
float salario, PercentualAumento, novosalario;
int op;
printf("Código 1 - Servente\nCódigo 2 - Pedreiro\nCódigo 3 - Mestre de Obras\nCódigo 4 - Técnico de segurança\n");
scanf("%d", &op);
switch(op) {
case 1:
    //percentual de aumento de 40%
    printf("O aumento é de 40 porcento.\nInforme o salário!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.40);
    novosalario = salario + PercentualAumento;
    printf("O servente recebe o salário de: R$%.2f com aumento\n", novosalario);
    break;
case 2:
    //percentual de aumento de 35%
    printf("O aumento é de 35 porcento.\nInforme o salário!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.35);
    novosalario = salario + PercentualAumento;
    printf("O pedreiro recebe o salário de: R$%.2f com aumento\n", novosalario);
    break;
case 3:
    //percentual de aumento de 20%
    printf("O aumento é de 20 porcento.\nInforme o salário!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.20);
    novosalario = salario + PercentualAumento;
    printf("O Mestre de Obras recebe o salário de: R$%.2f com aumento\n", novosalario);
    break;
case 4:
    //percentual de aumento de 10%
    printf("O aumento é de 10 porcento.\nInforme o salário!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.10);
    novosalario = salario + PercentualAumento;
    printf("O Técnico de Segurança recebe o salário de: R$%.2f com aumento\n", novosalario);
    break;
default:
    printf("Opção inválida!");
    break;

}
    return 0;
}

