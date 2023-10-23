#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

*/
int main(){
    setlocale(LC_ALL,"");
int soma, subtracao, multi, divisao, opcao, a, b;
printf("\tTABUADA BÁSICA\n");
printf("\n\t1 - Soma\n\t2 - subtração\n\t3 - multiplicação\n\t4 - divisão\n\t");
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
    printf("Calculadora de subtração!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    subtracao = a - b;
    printf("\n\tA subtração deu: %d\n", subtracao);
    break;
case 3:
    printf("Calculadora de multiplicação!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    multi = a * b;
    printf("\n\tA multiplicação deu: %d\n", multi);
    break;
case 4:
    printf("Calculadora de divisão!");
    printf("\nInsira dois valores, por favor!\n");
    scanf(" %d%d", &a, &b);
    divisao = a / b;
    printf("\n\tA divisão deu: %d\n", divisao);
    break;
default:
    printf("\tEsse número não consta na lista, digite um número válido!\n");
    break;
}
return 0;
}
