#include <stdio.h>
#include <stdlib.h>

int main () {
    int a,b,c;
        printf ("Ingrese un valor");
        scanf ("%d",&a);
            b=a%2;
if (b==0){
    printf("El valor es un numero par");
}
if(b>0) {
    printf ("El valor es un numero impar\n");
        c=a%3;
if(c==0){
    printf ("El valor es divisible entre 3");
}
else{
    printf ("El valor no es divisible entre 3");
}
}
}

