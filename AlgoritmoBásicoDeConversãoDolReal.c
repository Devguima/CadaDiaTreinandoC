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
 printf("1 - convers�o de d�lar para real:\n2 - convers�o de real para d�lar:\n3 - sair\nSe digitar outra op��o ser� inv�lido!\n");
 scanf(" %d", &opcao);
 switch(opcao){
 case 1:
     printf("Valor em d�lar?\n");
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
     printf("Essa op��o � inv�lida!");
     break;
 }
 return 0;
}

