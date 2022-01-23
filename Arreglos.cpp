// Importado de Liberias
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


///Declaración de funciones
void arreglos();

// Funcion principal
int main(){
		
	arreglos();
	return 0;
}


void arreglos(){
	printf("\n\n\nFuncion de arreglos\n");
	/*
		Los arreglos en C podemos verlo como una agrupaci�n de datos de cierto tipo, por ejemplo:
		
			una agrupaci�n de enteros:
				[1,2,3,4,5,6,7,85,225]  => Esto es un arreglo de 9 datos "separados" por copa
			una agrupaci�n de cadena de caracteres:
				["lola","paquita","manuela","azucena"]  => esto es un arreglo de 9 datos separados por coma, cada dato corresponde a un cadena de caracteres 

		El arreglo solamente puede tener un tipo de dato. 
		Posiciones: cada dato dentro de una arreglo tiene posici�nes. Todos los arreglos empiezan en la posici�n 0, por ejemplo
		
			[1,2,45,5] => la posici�n 0 de este arreglo es el "1" mientras que la posici�n 2 corresponde a "45"
		
		Dimensiones de un arreglo: existen arreglos de diferentes tama�os y "dimensiones" por ejemplo:
		
			Una dimensi�n
				[1,2,3,4,5,6,7,85,225]
			dos dimensiones: podemos ver que este arreglo tiene arreglos en su interio, dandole a cada valor dos posiciones (digamos... x & y )
				
				[[1,2,45,5], [4,2,5345,5], [1,5,465,54], [12,24,455,5]]  => 
					el dato con la posicion 1,2 corresponde a el segundo arreglo (la posoci�n 1) y  el dato en la posici�n [2] detro de ese arreglo, siendo:5345												
	*/
	
	// Arreglo de 1 dimesi�n
	int arregloEnteros[10] = {1,2,3,5,6,7,8}; /// Declaraci�n de un arreglo de 10 espacio
	for( int i=0; i<=10; i++){
		printf("Posicion en arregloEnteros: %i",i);
		printf(" valor: %i \n", arregloEnteros[i]);		
	}
	
	// Arreglo de 2 Dimensiones  (puedes ver el que hay dos arreglos dentro del arreglo)
	int arregloEnteros2Dim[2][3] = { {1,2,3}, {4,5,65} };
	for(int i1 = 0; i1 <=1 ; i1 ++){
		//aqui recorremos la primera dimension del arreglo
		printf("\n Dimension: %i ", i1 );
		for(int j=0; j<=2; j++){
			printf("\n--- Posici�n: %i ", j );
			printf(" - Posicion general: [%i][%i]",i1,j);
			printf(" - valor: %i ", arregloEnteros2Dim[i1][j]);
		}
	}
}

