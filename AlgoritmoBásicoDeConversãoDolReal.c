#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

*/
int main() {
setlocale(LC_ALL,"");
 float n, real = 0, dol = 0;
 int opcao;
 char continuar;
 printf("1 - conversão de dólar para real:\n2 - conversão de real para dólar:\n3 - sair\nSe digitar outra opção será inválido!\n");
 scanf(" %d", &opcao);
 switch(opcao){
 case 1:
     printf("Valor em dólar?\n");
     scanf(" %f", &n);
     dol = n * 4.99;
     printf("Valor convertido: R$%.2f", dol);
     break;
 case 2:
    printf("Valor em real?\n");
     scanf(" %f", &n);
     real = n / 4.99;
     printf("Valor convertido: U$%.2f", real);
    break;
 case 3:
    printf("Saindo do programa.");
    break;
 default:
     printf("Essa opção é inválida!");
     break;
 }
 return 0;
}

