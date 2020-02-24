#include <stdio.h>
#include <stdlib.h>
int main (){
	int a,b;
	printf("Introduce un valor");
	scanf("%d",&a);
	printf("Introduce un segundo valor");
	scanf("%d",&b);
if (a>b)
	printf("%d es mayor a %d\n",a,b);
else if (a<b)
	printf("%d es menor a %d\n",a,b);
else if(a==b)
	printf("%d es igual a %d\n",a,b);
	}
