/* File responsible for Login function and validation of user data */

// Libraries
#include <iostream>
#include <string.h>

// Constants
#define True 1
#define False 0

int Login (){
	char user[7]= "abcde", key[7]="abcde";
	int attempt = 1;  // Inicia em 1, pois o 1o acesso e considerado uma tentativa
	int User, Key;

	while (attempt <=3){
		
		printf("Digite seu usuario:\t");  // Entrada de dados do usuario
		scanf("%s", user);
		printf("Digite sua senha:\t");
		scanf("%s", key);
		
		
		User = strcmp(user, "admin"); // Compara se os dados e retorna zero se sao iguais
		Key = strcmp(key, "admin");
		
		// Autenticacao de usuario
		if(User == False && Key == False){
			return True;  // Retorna True se estiver Ok os dados do usuario
			
  		} else if((User != False || Key != False) && attempt < 4){  // O usuario tem direito a 3 tentativas
			printf("Dados incorretos\n\n");
			attempt += 1;
		}
	}

	/*
	Como o usuario pode tentar acertar a senha 3 vezes, acima disso e considerado fraude
		por isso que qualquer valor diferente de 1 tentativa correta aciona o mecanismo de informacao
	*/
	if (attempt > 1)
		return False;
}

