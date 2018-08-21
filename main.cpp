/*
	Name: ATM system
	Copyright: 2018 Augusto Machado Ramos
	Author: Augusto Machado Ramos
	Date: 18/08/18 11:35
	Comment language: pt-br
	Description: 
		The goal was to develop an ATM system or a bank self-service platform,
			from project design,
			interface design and project architecture to system implementation.
		In addition to developing the notion of programming in general,
			know the fundamentals of embedded software programming,
			in addition to developing advanced knowledge in C / C ++.
*/

#include <iostream>  // Libraries
#include <stdlib.h>

#define True 1  // Constants
#define False 0
#define MAX 3

// Structs

// Function prototypes
int Login ();


int main(){
	int ok = True;
	
  	ok = Login();

	if (ok == True){
		printf("OLA Augusto!!\n");
		system("PAUSE");
	} else{
		/*
		Caso o numero de tentativas exeder a 3, o programa retorna zero indicando erro
			finalizando a operacao
		*/
		system("cls");
		printf("Voce excedeu ao numero de tentativas permitidas\n");
		printf("Contate seu gerente para desbloquear sua senha\n\n");
		return 0;
	}
}
