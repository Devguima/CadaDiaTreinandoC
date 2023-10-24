#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

*/
int main() {
    setlocale(LC_ALL, "");

    int n;
    printf("Informe um número para sabermos se é divisível por 5, 3 ou 2.\n");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("Este número é divisível por 5!\n");
    } else if (n % 3 == 0) {
        printf("Este número é divisível por 3!\n");
    } else if (n % 2 == 0) {
        printf("Este número é divisível por 2!\n");
    } else {
        printf("Este número não é divisível por 2, 3 ou 5.\n");
    }

    return 0;
}






