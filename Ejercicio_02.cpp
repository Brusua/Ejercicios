#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,b;
		printf("Ingresa el primer valor");
		scanf("%d",&a);
		printf("Ingresa el segundo valor");
		scanf("%d",&b);
if(a%b==0)
	printf("%d Es divisible por %d \n",a,b);
else
	printf("%d No es divisible por %d \n",a,b);
}
