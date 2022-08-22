#include<stdio.h>
int main()
{
    int nacimiento;
    int actual;
    int edad;
    printf("Ingre su anio de nacimiento: ");
    scanf("%d",&nacimiento);
    printf("Ingrese el anio actual: ");
    edad = actual - nacimiento;
    printf("Su edad es: %d" , edad);
    
    return 0;
}