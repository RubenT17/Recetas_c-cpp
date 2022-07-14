#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.1416 //Los macros se representan con may�sculas por convenio

// Y:
// 	\\eps17-41\Users\Public
// 	usuario, pr�ctica

int main("PROGRAMA PRESENTACI�N") {
	
	double perimetro, area;
	double radio = 5; 
	perimetro = 2*PI*radio;
	area = PI*radio*radio;
	printf ("Mi primer programa en C\n");
	return 0;}



int main("PROGRAMA PRINTF") {
	
	printf ("Hola, mundo!\n");
	printf ("Escribo otra cosa.\r");
	printf ("Y otra cosa mas.\t");
	printf ("Has leido \"El Quijote\" entero?\n");
	printf ("Debo usar el \\n al terminar un printf \n");
	return 0;}

/*
\n --> Salto de l�nea
\r --> Retorno de carro (vuelve al principio de la l�nea)
\t --> Usa tabulador horizontal(Ej:	hola	hola	hola)
\" --> Escribe una comilla (sin funci�n). No es lo mismo "El Quijote" que \"El Quijote\"
\a --> Alerta
Para escribir comillas dentro de unas comillas se usa --> \"El Quijote\"
*/



int main("PROGRAMA MULTIPLICACI�N ENTEROS Y RESULTADO FLOTANTE") {

	int a, b;
	float res;
	a= 3;
	b= 2;
	res = 1.0*a/b;
	return 0;}

/*
Para multiplicar dos numeros y que salga un valor flotante, hay que multiplicar
por un valor flotante al inicio de la operaci�n (si la operaci�n es con n�meros enteros)
*/



int main("PROGRAMA ESCRIBIR VARIABLES EN PANTALLA") {
	
	int n;
	n= 5;
	printf ("La expresi�n vale: %d\n", n);
	printf ("Si divides %d entre 2 queda: %f\n", n,1.0*n/2);
	return 0;}

int main("PROGRAMA VARIABLES ALINEADAS A LA DERECHA") {
	
	printf ("%6d\n",1);
	printf ("%6d\n",10);
	printf ("%6d\n",100);
	printf ("%6d\n",1000);
	return 0;}

/* 	
%d --> Imprime en pantalla los n�meros enteros de despu�s de la coma (d indica el tipo de variable)
%f --> Imprime en pantalla los n�meros flotantes de despu�s de la coma (f indica el tipo de variable)
	- Si se pone varios %d o %f, muestra por orden de aparici�n despu�s de la coma
	- Si escribes un n�mero entre % y el tipo de variable (Ej: %7f) SIEMPRE escribe ese numero de espacios 
		(si la variable tiene 6 digitos, solo escribe un espacio)
	- Si escribes un punto y un numero despues de "%" en un tipo flotante (Ej: %.3f) muestra ese numero de decimales
%c --> Imprime en pantalla un car�cter
%s --> Imprime en pantalla una cadena de caracteres

EJEMPLO COMPLETO:

	int main() {

		printf ("%7d\n%10.2f\n%11.3f\n%7.0f\n%9.1f\n----------------\n%11.3f", 242, 0.34, 13.004, -28.0, 1327.5, 242+0.34+13.004-28.0+1327.5);
		return 0;
		}
*/



int main("FUNCIONES MATEM�TICAS") {
#define PI 3.14159265358979323846264338327950288419716939937510
#define e 2.718281828459045235360287471352662497757247093699959
#include <math.h>
	
	float sin(PI)
	float cos(PI)
	float tan (PI)
	float asin(sen(PI))
	float acos(cos(PI))
	float atan (tan(PI))
	float pow (sen(a),2)
	float log (e)		// Hace el logaritmo neperiano de lo de dentro del par�ntesis
		
	float log(x)/log(b); //Hace el logaritmo neperiano de "x" en base "b"
	float 1+floor(log(x)/log(b)) // Cuando "b" = 2,  el resultado es el numero de bits que necesita un numero para expresarlo en base binaria
	
		

int main("CREAR FUNCIONES") {
		
	//void ---> tipo de variable que no devuelve ningun valor (usada en funciones)

#define PI 3.14159265
#include <math.h>
#include <stdio.h>

	double logbase (double, double);  	// IMPORTANTE NOMBRR EL PROTOTIPO ANTES DE LA FUNCI�N MAIN
	double dig (double);				// IMPORTANTE NOMBRR EL PROTOTIPO ANTES DE LA FUNCI�N MAIN
	
int main(){
		
	float n= 64;
	n = dig (n);
	printf("%f", n);
	return 0;
}
	
double logbase (double a, double b) { 	// IMPORTANTE NOMBRR EL PROTOTIPO ANTES DE LA FUNCI�N MAIN
	
	double res = log(a)/log(b);
	return res;	
}
	
double dig (double n){ 					// IMPORTANTE NOMBRR EL PROTOTIPO ANTES DE LA FUNCI�N MAIN
	
	double res = 1+floor (logbase (n,2));
	return res;
}

// *********IMPORTANTE NOMBRAR EL PROTOTIPO ANTES DE LA FUNCI�N MAIN***********

	
	
	
int main ("ENTRADAS DE VARIABLES EN CONSOLA") {
	
	int edad1, edad2;
	
	printf ("Introduce por teclado tu edad y pulse enter:");
	fflush (stdin); 					//Borra los datos almacenadoes en el teclado
	scanf ("%d%d", &edad1, &edad2);		//Escanea los datos introducidos
	printf ("Tu edad es: %d %d\n", edad1,edad2);
	
	return 0;
	}
/*
&edad1 --> & --> indica que hace referencia a la direcci�n de la variable (no a su contenido)
- En scanf:
	- %d --> Un n�mero entero en formato decimal (char, short, int, long)
	- %f --> Un n�mero real, en formato de simple precisi�n (float)
	- %lf --> Un n�mero real, en formato de doble precisi�n (double)
	- %c Una letra, s�mbolo, o car�cter en general (char, short, int, long)
	- %x Un n�mero entero en formato hexadecimal (int, long)
*/



int main("FUNCIONES DE CONDICIONALES IF & ELSE") {

	int a;

	printf ("Introduce por teclado el valor a y pulse enter:");
	fflush (stdin); 	//Borra los datos almacenadoes en el teclado
	scanf ("%d", a);	//Escanea los datos introducidos &--> indica que hace referencia a la direcci�n de la variable (no a su contenido)
	
	if (a<6)
	printf ("Menos que 6\n");
	
	else
	if (a==6)
	printf ("Igual a 6\n");
	
	else
	{
	 printf ("Mayor que 6\n");
	 printf ("Uso {} cuando hay m�s de una intrucci�n\n");
	}	

	return 0;
	}

/* 
- Operadores relacionales:
	<, >, <=, >=, ==, !=

- Operadores l�gicos:
	&&, || 
*/



int main("FUNCION CONDICIONAL SWITCH") {
	
	int num;
	printf ("Introduce un n�mero del 1 al 5:");
	fflush (stdin);
	scanf ("%d", &num);
	
	
	switch (num) { //Eval�a una �nica variable que tiene un conjunto finito de valores discretos
		
	case 1: printf ("\nUno\n");
	break;	//Rompe la ejecuci�n si se da el caso. Podemos no ponerlo si no queremos romper la funci�n (si tienen relaci�n entre los casos)
	
	case 2: printf ("\nDos\n");
	break;	//Rompe la ejecuci�n si se da el caso
	
	case 3: printf ("\nTres\n");
	break;	//Rompe la ejecuci�n si se da el caso
	
	case 4: printf ("\nCuatro\n");
	break;	//Rompe la ejecuci�n si se da el caso
	
	case 5: printf ("\nCinco\n");
	break;	//Rompe la ejecuci�n si se da el caso
	
	default: printf ("\nError\n");		//Si no se cumple ninguno de los casos, da por default lo que haya en la funci�n
	}
	
	return 0;
}



int main("BUCLE WHILE") {
	
	int i;
	
	
	while (i<10) //Mientras....
	{
		printf ("%d\n");
		i=i+1;
	}
	
	return 0;
}



int main("BUCLE FOR") {
	
	int i = 20;
	
	for (i=0;i<10;i++) //Da un valor al primer par�metro y hasta el segundo par�metro, ejecuta el bucle y despu�s hace el tercer par�metro
		printf ("%d\n",i);
	
	
	return 0;
}

//Se usa en casos en que se sabe el numero de veces que se va a repetir



int main("BUCLE DO-WHILE") {
	
	int i = 20;
	
	do  //Primero ejecuta y despu�s eval�a
	{
		printf ("%d\n");
		i=i+1;
	}while (i<10); //Mientras....
	
	return 0;
}

/*Siempre se ejecuta el bucle al menos una vez
  se usa en casos que quieras ejecutar m�nimo 1 una vez
	if(x) = if(x!=0)*/



int main("TABLA ASCII") {
	
	unsigned char i; //Valor de 8 bits sin signo
	
	i=32;
	while (i<=127) 
	{
		printf ("%3d - %c\n", i, i);
		i++;
	}
	return 0;
}
//Muestra la tabla completa de car�cteres ASCII



#include <string.h>
int main("VECTORES Y CADENAS") {
	
	int j,i;
	int v[10] = {0,0,0,0,0,0,0,0,0,0};		//Vector de dimensi�n 10 + inicializaci�n
	for (i=0; i<j;i++)				//Otra forma de inicializar
		v[i] = 0;
	
	printf ("�Qu� nota quieres saber?");
	fflush (stdin);
	scanf ("%d",&j);
	printf ("Tu nota es %d\n", v[j]);	//Muestra el valor del elemento entre par�ntesis del vector
	
	char n;
	n='A'; 							// Car�cter A y a su vez el numero correspondiente en ASCII
	
	char fecha;
	char fecha[11];
	printf ("Dime la fecha en formato DD/MM/AAAA: ");
	fflush (stdin);
	gets (fecha); 					//Los car�cteres introducidos se guardan en la variable fecha
	printf ("Tu fecha de nacimiento es: %s", fecha);
	strcpy (cadena, "17/10/1999")	 //Copia en el primer vector el segundo vector (cadena de caracteres)
		
	
	char cadena[181];			//Cadena de 180 caracteres y el ultimo caracter cadena[181]= 0
	for (i=0; i<strlen(cadena); i++) //En cada vuelta del bucle esta accediendo a un car�cter de la cadena
		//Strlen() ---> Da la longitud de la cadena entre par�ntesis
		strcat (cadena, fecha)		//Concatena el primer vector con el segundo vector v1,v2.
		return 0;
}

