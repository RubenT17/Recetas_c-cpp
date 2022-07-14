
#include <math.h>
#include <stdio.h>

int esprimo (int n);
void muestraprimos (int n);

int main() 
{

int n, a;
	
printf ("Escribe un número primo menor a 65538: \n");
fflush (stdin); 					//Borra los datos almacenados en el teclado
scanf ("%d", &n);

a = esprimo (n);
muestraprimos (n);

return a;

}


int esprimo (int n)
{
	
int a,b, primo;

b= n%2;

if(b==0)
	primo = 0;

else if (n==3 || n==5 || n==7)
	primo = 1;

else
{
	for (a=3;a<=sqrt(n); a=a+2)
	{
		b=n%a;
		if(b==0)
		{
			a=n;
			primo = 0;
		}
		
		else
		   primo = 1;
	}
	
	
}
return primo;
}


void muestraprimos (int n)
{
	int a=2;
	printf ("%d ", a);
	for (a=3; a<=n; a=a+2)
	{
		if (esprimo (a) == 1)
		printf ("%d ", a);
	}
}
