#include<stdio.h>
int main()
{
    // Dada una variable cualquiera:
    int a = 32764;

    //Creamos un puntero
    int *p;

    // Que apunta a la dirección de la variable a
    p = &a;
    
	printf("La direccion de memoria de 'a' es: %p ", &a);
	printf("y su contenido es : %d \n", *p);

    //Cambiamos el valor de la variable a a través del puntero
    printf("El anterior valor de 'a' era: %d\n", a);
    *p=1111;
    printf("El actual valor de 'a' es: %d \n", a);
}