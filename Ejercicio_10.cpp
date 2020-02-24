#include <stdio.h>
#include <stdlib.h>
int main (void){
	int opt;
	int base, altura, base2;
	float area;
		printf("Seleccione una opcion\n");
		printf("1.-Calcular el area de un triangulo\n2.-Calcular el area de un trapecio\n3.-Calcular el area de un rectangulo");
		scanf("%d",&opt);
switch (opt){
	case 1:
		printf("Ingrese la base");
		scanf("%d",&base);
		printf("Ingrese la altura");
		scanf("%d",&altura);
	(area=base*altura/2);
		printf("El area del triangulo es:%f",area);
		break;
	case 2:
		printf("Ingrese la base mayor");
		scanf("%d",&base);
		printf("Ingrese la base menor");
		scanf("%d",&base2);
		printf("Ingrese la altura");
		scanf("%d",&altura);
	(area=(altura*((base+base2)/2)));
		printf("El area del trapecio es: %f",area);
		break;
	case 3:
		printf("Ingrese la base");
		scanf("%d",&base);
		printf("Ingrese la altura");
		scanf("%d",&altura);
	(area=base*altura);
		printf("El area del rectangulo es: %f",area);
	}
}
