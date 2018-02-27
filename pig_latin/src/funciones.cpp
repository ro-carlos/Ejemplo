#include "funciones.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


//cout<<"Este es el comentario del branch-master";

void agregar_terminacion_palabra(char frase[],int tam,char *token, char *cifrada){
	int new_tam=0;
	new_tam = gettam_nuevacadena(frase,tam);

	char *frase_nueva;
	frase_nueva = new char[new_tam];


	strcpy(frase_nueva," ");

	token = strtok(frase," ");
	while (token != NULL){

		//if((*token=='0')||(*token=='1')||(*token=='2')||(*token=='3')||(*token=='4')||(*token=='5')||(*token=='6')||(*token=='7')||(*token=='8')||(*token=='9')){
		if((*token>='0')&&(*token<='9')){

			cifrada = new char[strlen(token)+1];
			strcpy(cifrada,token);
			cifrada[strlen(token)]='\0';
			strcat(cifrada," ");
			strcat(frase_nueva,cifrada);
			cout<<endl<<"Frase Nueva:  "<<frase_nueva;
		}

		else if ((*token=='a')||(*token=='e')||(*token=='i')||(*token=='o')||(*token=='u')){
			cifrada = new char[strlen(token)+4];
			strcpy(cifrada,token);
			strcat(cifrada,"yay ");
			strcat(frase_nueva,cifrada);
			cout<<endl<<"Frase Nueva:  "<<frase_nueva;
			cout<<endl<<cifrada<<endl;
		}

		else{
			cifrada = new char	[strlen(token)+3];
			strcpy(cifrada,token+1);
			cifrada[strlen(token)-1]=*token;
			cifrada[strlen(token)]='\0';
			strcat(cifrada,"ay ");
			strcat(frase_nueva,cifrada);
			cout<<endl<<"Frase Nueva: "<<frase_nueva;
			cout<<endl<<cifrada<<endl;
		}
		token = strtok(NULL," ");
	}
	cout<<endl<<"La cadena resultado es: "<<frase_nueva<<endl;
}

int gettam_nuevacadena(char frase[],int tam){

	int new_tam=0,cont=0;
	char *token;
	char frase_copia[tam];

	new_tam=new_tam+tam;

	strcpy(frase_copia,frase);

	token = strtok(frase_copia," ");
	while(token != NULL){
		if ((*token=='a')||(*token=='e')||(*token=='i')||(*token=='o')||(*token=='u')){
			cont=cont+3;

		}else{
			cont=cont+2;
		}

	}

	new_tam=new_tam+cont;

	return new_tam;
}
