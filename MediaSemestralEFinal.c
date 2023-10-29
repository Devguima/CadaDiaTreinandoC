#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*

*/
int main() {

setlocale(LC_ALL,"portuguese");
float a = 0, b = 0, ms, mf, ex;
char resposta;

do {
        printf("Digite a primeira nota(0 a 10):\n");
        scanf("%f", &a);
}while (a < 0 || a > 10);
do {
        printf("Digite a segunda nota(0 a 10):\n");
        scanf("%f", &b);
}while (a < 0 || a > 10);

ms = (a + b) / 2;

printf("A nota do aluno foi: %f\n", ms);
if (ms >= 7 && ms < 11) {
    printf("Aluno aprovado!\n");
}else if (ms < 7) {
    printf("Aluno reprovado!\n");
do{
    printf("Deseja aplicar o exame final ao aluno? (S/N): ");
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's') {
        printf("Insira a nota do aluno do exame final: \n");
        scanf("%f", &ex);
        mf = (ms + ex) / 2;
        if (mf > 5 && mf < 11) {
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno com dependência.\n");
    }
    break;
    }else if (resposta == 'N' || resposta == 'n'){
        printf("O exame final não será aplicado para a recuperação do aluno.");
    }else{
        printf("Insira uma tecla correta com S ou N, por favor!");
    }

}while (resposta != 'N' && resposta != 'n');
}
}




