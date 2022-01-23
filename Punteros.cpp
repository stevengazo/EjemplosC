// Importado de Liberias
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


///Declaraci�n de funciones

void apuntador();

// Funcion principal
int main(){
	
	apuntador();
	
	return 0;
}


void apuntador(){
	
	/*
		los punteros lo que hacen es apuntar a una direcci�n en memoria
		Cuando declaramos una variable, a estas se les asigna un posici�n en memoria RAM
		con los punteros podemos acceder a dicha posici�n y el contenido en la memoria RAM
		y hacer las operaciones que queramos.
		
		A continuaci�n un ejemplo de un puntero
	*/
	cout<< "Funcion apuntador\n";
	
	int variable = 10; //Creamos un entero	
	int * apuntador = &variable;//Creamos una apuntador a la posici�n en memoria de "variable"
	
	printf("Este puntero esta apuntado a la variable \"variable\"\n");
	printf("El valor de \"variable\" es : %i \n",variable);
	printf("Direcci�n en en memoria de \"*apuntador\": %p \n", apuntador);
	
	*apuntador = 20; //Le asignamos un valor a esa posici�n de memoria.
	
	printf("Se ha asignado 20 al puntero \" *apuntador \", el valor en \" variable \" es: %i \n",variable);	
	
	delete [] apuntador; //Despu�s de operar con punteros es necesario liberar la memoria.	
	
}

