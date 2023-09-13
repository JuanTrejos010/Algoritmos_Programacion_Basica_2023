#include <stdio.h>

int main(){
	float Num;
	printf("Inserta el número:\n");
	scanf("%d", &Num);
	if (Num>0){
		printf("%d es positivo.");
	} else if (Num==0){
		printf("%d es neutro.");
	} else {
		printf("%d es negativo.");
	}
}
