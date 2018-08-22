/*
Saldo
Deposito
Saque
Transferencia
Pagamento
Finalizar

*/


// Libraries
#include <iostream>
#include <string.h>

// Constants
#define True 1
#define False 0

int Menu(){
	char choices;
	int type = 0;
	
	// WARNING: digitar letra faz entrar em loop este trecho, garanta que entre so inteiros
	while (type != 1 && type != 2){
		printf("Qual o seu tipo de conta?\n\n1- Conta Corrente\n2- Conta Poupanca\n");
		scanf("%d", &type);
	}
	printf("Tipo: %d", type);

		if (choices == 1){

		} else if (choices == 2){

		} else {

		}


		while (choices != 'E'){


		}
}
