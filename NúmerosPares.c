#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*

*/
int main()
{
 int i;
 setlocale(LC_ALL,"Portuguese");

 printf("Pares 1 e 100 são:\n ");
    for(i = 1; i < 100; i++)
      {
        if(i % 2 == 0)
         {
           printf("%d ", i);
          }
      }
return 0;
}





