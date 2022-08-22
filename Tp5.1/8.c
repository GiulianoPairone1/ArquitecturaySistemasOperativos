#include <stdio.h>
#include <ctype.h>
 
int main(int argc, char const *argv[])
{
	char cadena[] = "HOLA! MI NOMBRE ES GIULIANO";
	printf("Cadena original: %s\n", cadena);
 
	// Convertir cada char a minúscula
	// usando tolower
	for (int indice = 0; cadena[indice] != '\0'; ++indice){
		cadena[indice] = tolower(cadena[indice]);
	}
	printf("Cadena despues de ser convertida: %s\n", cadena);
	return 0;
}