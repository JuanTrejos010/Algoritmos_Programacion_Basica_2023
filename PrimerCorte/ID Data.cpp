#include <stdio.h>
#include <string>

int main(){
	char PrimerNombre[40], SegundoNombre[40], PrimerApellido[40], SegundoApellido[40], CiudadExp[26];
	int NumID, DDNac, MMNac, AANac, DDExp, MMExp, AAExp;
	printf("Introduce documento de identificación.\n");
	scanf("%s", &NumID);
	printf("\nIntroduce primer nombre.\n");
	scanf("%s", &PrimerNombre);
	printf("\nIntroduce segundo nombre.\n");
	scanf("%s", &SegundoNombre);
	printf("\nIntroduce primer apellido.\n");
	scanf("%s", &PrimerApellido);
	printf("\nIntroduce segundo apellido.\n");
	scanf("%s", &SegundoApellido);
	
	printf("\n\n----Fecha de nacimiento.----\n\n");
	printf("Día de nacimiento.\n");
	scanf("%d", &DDNac);
	printf("Mes de nacimiento.\n");
	scanf("%d", &MMNac);
	printf("Año de nacimiento.\n");
	scanf("%d", &AANac);
	
	printf("\n\n----Fecha de expedición----\n\n.");
	printf("Día de expedición.\n");
	scanf("%d", &DDExp);
	printf("Mes de expedición.\n");
	scanf("%d", &MMExp);
	printf("Año de expedición.\n");
	scanf("%d", &AAExp);
	
	printf("\nEl nombre es "); printf(PrimerNombre); printf(" "); printf(SegundoNombre); printf(" "); printf(PrimerApellido); printf(" "); printf(SegundoApellido);
	
	return 0;
}
