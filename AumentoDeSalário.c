#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*
Aula 68: estrutura de repeti��o do {} while(fa�a enquanto).
*/
int main() {
setlocale(LC_ALL,"portuguese");
float salario, PercentualAumento, novosalario;
int op;
printf("C�digo 1 - Servente\nC�digo 2 - Pedreiro\nC�digo 3 - Mestre de Obras\nC�digo 4 - T�cnico de seguran�a\n");
scanf("%d", &op);
switch(op) {
case 1:
    //percentual de aumento de 40%
    printf("O aumento � de 40 porcento.\nInforme o sal�rio!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.40);
    novosalario = salario + PercentualAumento;
    printf("O servente recebe o sal�rio de: R$%.2f com aumento\n", novosalario);
    break;
case 2:
    //percentual de aumento de 35%
    printf("O aumento � de 35 porcento.\nInforme o sal�rio!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.35);
    novosalario = salario + PercentualAumento;
    printf("O pedreiro recebe o sal�rio de: R$%.2f com aumento\n", novosalario);
    break;
case 3:
    //percentual de aumento de 20%
    printf("O aumento � de 20 porcento.\nInforme o sal�rio!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.20);
    novosalario = salario + PercentualAumento;
    printf("O Mestre de Obras recebe o sal�rio de: R$%.2f com aumento\n", novosalario);
    break;
case 4:
    //percentual de aumento de 10%
    printf("O aumento � de 10 porcento.\nInforme o sal�rio!\n");
    scanf("%f", &salario);
    PercentualAumento = (salario * 0.10);
    novosalario = salario + PercentualAumento;
    printf("O T�cnico de Seguran�a recebe o sal�rio de: R$%.2f com aumento\n", novosalario);
    break;
default:
    printf("Op��o inv�lida!");
    break;

}
    return 0;
}

