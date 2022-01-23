// Importado de Liberias
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


/// Declaración de funciones
void cadenas();

int main(){
	cadenas();
}


void cadenas(){
	/// Declaración de una cadena y asignacion de datos
	int tamano = 5;
	char cadena1[tamano] = "Hola"; 
	char cadena2[tamano] = {'H','o','l','a',0}; 
	char cadena3[tamano] = {'H','o','l','a','\0'}; 	
	
	/// recorrido de una cadena
	for(int i=0; i<= (tamano-1);i++){
		printf("\n Letra: %c",cadena1[i]);	
	}
	
}
