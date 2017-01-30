#include <stdio.h>

void variavel(int x);
void variavelPonteiro(int *x);

int main() {
	
	int teste = 1;
	int *ponteiroTeste;
	ponteiroTeste = &teste;
	
	variavel(teste);
	printf("Sem ponteiro Variavel Teste = %d\n", teste);
	
	variavelPonteiro(ponteiroTeste);  //Na fun��o se passa o endere�o de memoria como parametro (sem *)
	printf("Com ponteiro Variavel Teste = %d\n", teste);	
	
	return 0;
}

void variavel(int x){
	++x;
}

void variavelPonteiro(int *x){
	++*x;
}

/*
	Sem ponteiro a fun��o faz uma c�pia da variavel (Usando mais memoria RAM).
	Com ponteito n�o faz c�pia (Poupando memoria RAM).
*/