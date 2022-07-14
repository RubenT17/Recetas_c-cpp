#include <stdio.h>


int main() {
	
	unsigned char i; //Valor de 8 bits sin signo
	
	//i=0; //Caracteres no legibles
	i=32;
	while (i<=127) 
	{
		printf ("%3d - %c\n", i, i);
		i++;
	}
	return 0;
}
//Muestra la tabla completa de carácteres ASCII
