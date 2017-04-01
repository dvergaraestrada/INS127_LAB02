//Alumnos Diego Vergara - Luis Jara

#include <stdio.h>
#include <time.h>

typedef struct array
{
	int a;
	int arreglo[];
	
}Array;


Array iniciarArray ()
{
	int i;
	Array aux;
	printf("Indique el tamaño de arreglo: ");
	scanf("%d",&aux.a);//almacena el valor del tamaño del arreglo ingresado por el usuario
	srand(time(0));//funciones para generar los numeros aleatorios
	for (i=0;i<aux.a;i++){
		aux.arreglo[i]= rand();//los numeros aleatorios se guardan en el arreglo
	}
	return aux;
}
void mostrarArray (Array aux)
{
	int i;
	for (i=0;i<aux.a;i++){
		printf("{%d}\n",aux.arreglo[i]);//imprime los valores del arreglo
	}
}

int main() 
{
	Array x;
	x= iniciarArray ();
	mostrarArray (x);
	return 0;

}
