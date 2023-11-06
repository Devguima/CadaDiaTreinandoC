#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
*/

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, a, b, result = 0;
    do{
            printf("Digite dois números inteiros:\n");
            scanf("%d%d", &a, &b);

    }while((a < 0) && (b < 0));
for(i = 1; i <= a; i++)
result += b;
printf("%d x %d é igual a: %d\n", a, b, result);
return 0;
}
