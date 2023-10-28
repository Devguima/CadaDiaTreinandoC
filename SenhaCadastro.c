#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*

*/
int main() {

setlocale(LC_ALL,"portuguese");
int senha, senhacadastro;
printf("Informe uma senha!\n");
scanf("%d",&senhacadastro);
printf("Senha cadastrada. Repita a senha, por favor!\n");
scanf("%d", &senha);
while (senha != senhacadastro) {
   printf("Senha errada. Informe a sua senha certa!\n");
   scanf("%d", &senha);
 }
 printf("Senha correta! Acesso liberado.\n");
}




