/solis García Luis manuel
Laboratorio practica 8
tablas de multiplicar*/

#include <stdio.h>
#include <stdlib.h>

void mult_for(int n)
{
  int resp;
  
  for(int i = 1; i <= 10; i++)
  {
    resp = n * i;
    printf("%d * %d = %d\n", n, i, resp);
  }
  //return 0;
}

void mult_while(int n)
{
    int resp;
    int i = 1;

    while (i <= 10)
    {
        resp = n * i;
        printf("%d * %d = %d\n", n, i, resp);
        i = i + 1;
    }
    
}

void mult_dowhile(int n)
{
    int resp;
    int i = 1;

    do
    {
        resp = n * i;
        printf("%d * %d = %d\n", n, i, resp);
        i = i + 1;
    } while (i <= 10);
    
}

int main()
{
    int n;
  
    printf("Dame el numero de la tabla a multiplicar: ");
    scanf("%d", &n);

    printf("\n\n\n");
    printf("Utilizacion del for\n");
    mult_for(n);

    printf("\n\n\n");
    printf("Utilizacion del while\n");
    mult_while(n);
    
    printf("\n\n\n");
    printf("Utilizacion del do-while\n");
    mult_dowhile(n);

    return 0;
}
