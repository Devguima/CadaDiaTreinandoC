#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

*/
int main(){
    setlocale(LC_ALL,"");
int soma, subtracao, multi, divisao, opcao, a, b;
printf("\tTABUADA B�SICA\n");
printf("\n\t1 - Soma\n\t2 - subtra��o\n\t3 - multiplica��o\n\t4 - divis�o\n\t");
scanf(" %d",&opcao);
switch(opcao) {
case 1:
    printf("Calculadora de soma!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    soma = a + b;
    printf("\n\tA soma deu: %d\n", soma);
    break;
case 2:
    printf("Calculadora de subtra��o!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    subtracao = a - b;
    printf("\n\tA subtra��o deu: %d\n", subtracao);
    break;
case 3:
    printf("Calculadora de multiplica��o!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    multi = a * b;
    printf("\n\tA multiplica��o deu: %d\n", multi);
    break;
case 4:
    printf("Calculadora de divis�o!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    divisao = a / b;
    printf("\n\tA divis�o deu: %d\n", divisao);
    break;
default:
    printf("\tEsse n�mero n�o consta na lista, digite um n�mero v�lido!\n");
    break;
}
return 0;
}
