#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Ingrese un numero");
    scanf("%d",&num1);
    printf("Ingrese otro numero");
    scanf("%d",&num2);
    if (num1 > num2)
    {
        printf("El numero 1 es mayor: %d" , num1);
    }
    else
    {
        printf("El numero 2 es mayor: %d" , num2);
    }

    return 0;        
}