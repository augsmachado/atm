/* File responsible for the options presented to the user */

// Libraries
#include <iostream>
#include <string.h>

// Constants
#define True 1
#define False 0

// Function Prototypes
char TypeAccount();
char Options();
void PrintOptions();

int Menu(){
	char choices;

	choices = TypeAccount();
	
	// Finaliza a operacao, caso a escolha seja um F
	if (choices =='1'){  // 1 representa a Conta Corrente
		while(choices != 'F'){
			choices = Options();
		}
	} else if (choices == '2'){  // 2 representa a Conta Poupanca
		while(choices != 'F'){
			choices = Options();
		}
	}
}


/* Escolha do tipo de conta */
char TypeAccount(){
	char choices;
	int ok = False;

	// WARNING: repete mensagem 2 vezes
	while (ok == False){
		printf("Qual o seu tipo de conta?\n1- Conta Corrente\n2- Conta Poupanca\n");
		scanf("%c", &choices);

		if(choices == '1' || choices == '2')  // Encerra a funcao se for uma das opcoes existentes
			ok = True;
	}

	return choices;
}

/* Apresenta todas as opcoes possiveis de transacao */
char Options(){
	char choices='A';
	
	while (choices != 'F'){
		PrintOptions();
		scanf("%c", &choices);
		
		if(choices == '6')
			return 'F'; // F finaliza a operacao no terminal
	}
	return '0';
}


/* Imprime opcoes existentes para transacao */
void PrintOptions(){
	system("cls");
	printf("Qual operacao deseja realizar?\n\n");
	printf("1- Saldo\n2- Deposito\n3- Saque\n4- Transferencia\n5- Pagamento\n6- Finalizar\n");
}

