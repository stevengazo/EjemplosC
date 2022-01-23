// Importado de Liberias
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


///DeclaraciÃ³n de funciones
void arreglos();
int sumaDatosArreglo( int numeros[], int CantidadElementos);
void arreglosFunciones();

// Funcion principal
int main(){
	/// info general arreglos
	arreglos();
	// como enviar un arreglo a una funcion
	arreglosFunciones();
	return 0;
}


void arreglos(){
	printf("\n\n\nFuncion de arreglos\n");
	/*
		Los arreglos en C podemos verlo como una agrupaciï¿½n de datos de cierto tipo, por ejemplo:
		
			una agrupaciï¿½n de enteros:
				[1,2,3,4,5,6,7,85,225]  => Esto es un arreglo de 9 datos "separados" por copa
			una agrupaciï¿½n de cadena de caracteres:
				["lola","paquita","manuela","azucena"]  => esto es un arreglo de 9 datos separados por coma, cada dato corresponde a un cadena de caracteres 

		El arreglo solamente puede tener un tipo de dato. 
		Posiciones: cada dato dentro de una arreglo tiene posiciï¿½nes. Todos los arreglos empiezan en la posiciï¿½n 0, por ejemplo
		
			[1,2,45,5] => la posiciï¿½n 0 de este arreglo es el "1" mientras que la posiciï¿½n 2 corresponde a "45"
		
		Dimensiones de un arreglo: existen arreglos de diferentes tamaï¿½os y "dimensiones" por ejemplo:
		
			Una dimensiï¿½n
				[1,2,3,4,5,6,7,85,225]
			dos dimensiones: podemos ver que este arreglo tiene arreglos en su interio, dandole a cada valor dos posiciones (digamos... x & y )
				
				[[1,2,45,5], [4,2,5345,5], [1,5,465,54], [12,24,455,5]]  => 
					el dato con la posicion 1,2 corresponde a el segundo arreglo (la posociï¿½n 1) y  el dato en la posiciï¿½n [2] detro de ese arreglo, siendo:5345												
	*/
	
	// Arreglo de 1 dimesiï¿½n
	int arregloEnteros[10] = {1,2,3,5,6,7,8}; /// Declaraciï¿½n de un arreglo de 10 espacio
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
			printf("\n--- Posicion: %i ", j );
			printf(" - Posicion general: [%i][%i]",i1,j);
			printf(" - valor: %i ", arregloEnteros2Dim[i1][j]);
		}
	}
}


 void arreglosFunciones(){
 	printf("\nejecución arreglos funcionaes\n");
	/*
	Por default, los arrreglos en C se pasan a una función como referencia y no como valor
	Las modificaciones realidas a un arreglo se hacen en el arreglo original y no en el pasado a la funcion	
	*/
	
	///Datos pasados por referencia a la función
	int TamanoArreglo = 5;
	int DatosASumar[TamanoArreglo] = {1,2,3,4,5};
	
	// le enviamos a sumarDatosArreglo ( el arreglo que queremos sumar, el tamaño del arreglo);
	// nos devuelve el resultado
	int resultado =  sumaDatosArreglo( DatosASumar , TamanoArreglo);
	
	for(int i=0; i<=(TamanoArreglo -1); i++){
		printf("\ndato a sumar: %i", DatosASumar[i] );
	}
	printf("\n\nLa suma de los numeros es: %i", resultado);
}


/// Esta funcion recibe por referencia un arreglo y suma los datos en el mismo 
// al final retorna esa suma
int sumaDatosArreglo( int numeros[], int CantidadElementos){
	int tmpSum = 0;
	for( int i= 0; i<= CantidadElementos; i++){
		tmpSum = numeros[i] + tmpSum;
	}	
	return tmpSum;	
}
