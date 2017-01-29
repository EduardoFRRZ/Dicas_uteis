#include <stdio.h>

struct data{
	int dia, mes, ano;
};

int main() {
	
	struct data DATA, *ponteiro;
	ponteiro = &DATA;
	
	ponteiro->dia = 19;
	DATA.mes = 1;
	DATA.ano = 1997;
	
	printf("%d / %d / %d\n", ponteiro->dia, ponteiro->mes, ponteiro->ano);           // Ponteiro
	printf("%d / %d / %d\n", (*ponteiro).dia, (*ponteiro).mes, (*ponteiro).ano);	 // Ponteiro
	printf("%d / %d / %d\n", DATA.dia, DATA.mes, DATA.ano);							 // Sem ponteiro
	
	/*
		int A;
		int *ponteiro;
		ponteiro = &A;
		
			OU
			
		int A;
		int *ponteiro = &A;	
	
	*/
	
	return 0;
}