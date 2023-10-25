#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*

*/
int main() {
setlocale(LC_ALL,"");
//o código está traduzido com o padrão português, ou seja, colocar o ponto no decimal vai dar erro.
float peso, altura, imc;

printf("Bem-vindo(a) ao programa que informa o seu peso!\n");
printf("Informe o seu peso!\n");
scanf("%f", &peso);
printf("Informe a sua altura!\n");
scanf("%f", &altura);

imc = peso / pow(altura, 2); //cálculo simplificado

printf("IMC: %.2f\n", imc); //saída de dados ao final

if (imc < 18.5){
    printf("Abaixo do peso normal.\n"); // processamento
}else if (imc >= 18.5 && imc < 24) {
    printf("Peso normal.\n");
}else if (imc >= 25 && imc < 29) {
    printf("Excesso de peso.\n");
}else if (imc >= 30 && imc < 34){
    printf("Obesidade clase 1.\n");
}else if (imc >= 35 && imc < 40) {
    printf("Obesidade classe 2.\n");
} else {
    printf("Obesidade classe 3.\n");
}
 return 0;
}

