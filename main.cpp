/*
	Name: ATM system
	Copyright: 2018 Augusto Machado Ramos
	Author: Augusto Machado Ramos
	Date: 18/08/18 11:35
	Description: 
		The goal was to develop an ATM system or a bank self-service platform,
			from project design,
			interface design and project architecture to system implementation.
		In addition to developing the notion of programming in general,
			know the fundamentals of embedded software programming,
			in addition to developing advanced knowledge in C / C ++.
*/

// Libraries
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define True 1
#define False 0
#define MAX 3

// Structs
struct User{
	int user;
	int key;
};

// Function prototypes
int Login (int user, int key);


int main(){
	User account[MAX];
	int ok= True, user, key;
	
	account[0].user = 1111;
	account[0].key = 123456;
	
	account[1].user = 2222;
	account[1].key = 123456;
	
	account[2].user = 3333;
	account[2].key = 123456;
	
	ok = Login(int user, int key);



	printf("OLA !!\n");
	system("PAUSE");
	return 0;

}
