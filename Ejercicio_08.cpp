#include <stdio.h>
#include <stdlib.h>
int main (void) {
	int a,b,c;
	printf("Introduzca tres valores");
	scanf("%d %d %d",&a, &b, &c);
if (a<b)
{
	if (a<c)
	{
		if(b<c)
		printf("%d, %d, %d\n",a,b,c);
		else printf ("%d, %d, %d\n",a,c,b);
	}
}
else
{
	if(b<c)
	{
		if (a<c)
		printf("%d,%d,%d",b,a,c);
		else printf ("%d,%d,%d",b,c,a);
	}
}
}

