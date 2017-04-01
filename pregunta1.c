#include <stdio.h>
#include <math.h>

typedef struct 
{
	int a;
	int b;
	
}Complex ;

Complex resta (Complex z, Complex w);
Complex partereal (Complex z);
Complex parteimag (Complex z);
Complex valorabsoluto (Complex z);
Complex conjugado (Complex z);

int main() 
{
	Complex x,y;
	
	x.a = 33;
	x.b = 44;
	
	y.a = 11;
	y.b = 22;
	
	printf ("( %i %i)\n", x.a, x.b); // (33,44)
	printf ("( %i %i)\n", y.a, y.b); // (11,22)
	
	
	Complex aux;
	aux = resta (x, y);
	printf ("(%i %i) - ( %i %i) = ( %i %i)\n", x.a, x.b, y.a, y.b, aux.a, aux.b ); // (33,44) - (11,22) = (22,22)
	printf("\n");
	Complex Re;
	Re = partereal (x);
	printf ("Re(%i)\n", Re.a); //Parte Real Re(z) a
	printf("\n");
	Complex Im;
	Im = parteimag (x);
	printf ("Im(%i)\n", Im.b); //Parte Real Im(z) b
	printf("\n");
	aux = valorabsoluto (x);
	printf ("|%i|\n", aux.b); //Valor Absoluto |z|
	printf("\n");
	aux = conjugado (x);
	printf ("%i + %ii = %ii\n", aux.a); //Valor conjugado de z
	printf("\n");
	
	return 0;

}

Complex resta (Complex z, Complex w)
{
	Complex aux;
	aux.a = z.a - w.a;
	aux.b = z.b - w.b;
	
	return aux;
	
}

 Complex partereal (Complex z){
 Complex Re;
 Re.a = z.a;

 return Re;
 }
 Complex parteimag (Complex z){
 Complex Im;
 Im.b = z.b;

 return Im;
 }
 Complex valorabsoluto (Complex z){
 Complex aux;
 aux.a = sqrt((z.a*z.a)+(z.b*z.b));
 aux.b = aux.a;
 
 return aux;
 }
 Complex conjugado (Complex z){
 Complex aux;
 aux.a = z.b + z.a;
 
 return aux;
 }

