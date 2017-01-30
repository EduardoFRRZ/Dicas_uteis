#include <stdio.h>

void variavel(int x);
void variavelPonteiro(int *x);

int main() {
	
	int teste = 1;
	int *ponteiroTeste;
	ponteiroTeste = &teste;
	
	variavel(teste);
	printf("Sem ponteiro Variavel Teste = %d\n", teste);
	
	variavelPonteiro(ponteiroTeste);  //Na função se passa o endereço de memoria como parametro (sem *)
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
	Sem ponteiro a função faz uma cópia da variavel (Usando mais memoria RAM).
	Com ponteito não faz cópia (Poupando memoria RAM).
*/