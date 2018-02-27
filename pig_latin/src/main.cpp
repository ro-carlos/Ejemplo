#include "funciones.h"
#include <iostream>
#include <cstdlib>
#include <string.h>

//Taller de Richy

# define p system("pause>n")


using namespace std;

int main(int argc, char** argv) {
	
	int tam=100;
	char frase[tam],*token,*cifrada;
	cout<<"Digite la frase a covertir: ";
  	
	frase[0] = '\0';
  	cin.getline(frase,tam);
  	
  	cout<<frase;
	
	agregar_terminacion_palabra(frase,tam,token,cifrada);
	
	
	p;
	return 0;
}
