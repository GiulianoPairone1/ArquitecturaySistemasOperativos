#include <stdio.h>
#include <math.h>

int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int div;
    int mul;
    int pot;
    printf("Ingrese un numero");
    scanf("%d", &num1);
    printf("Ingrese un numero");
    scanf("%d", &num2);
    suma=num1+num2;
    resta= num1- num2;
    div= num1 / num2;
    mul= num1 * num2; 
    printf(" El resultado de la suma es: %d. El resultado de la resta  es: %d. El resultado de la divicion es: %d. El resultado de la multiplicacion es: %d " , suma ,resta,div,mul);
    return 0;
}