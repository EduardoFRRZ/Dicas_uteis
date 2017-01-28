#include <stdio.h>
int main() {
	
	//Sem * acessa o endereço de memoria.
	//Com * acessa o valor que tem no endereço de memoria.
	
	int x = 10;
	int *ponteiro;
	ponteiro = &x;
	
	printf("%d\n\n", *ponteiro);
	printf("O ponteiro aponta para o endereco de memoria de x\n\n");
	printf("Ponteiro = %d\nx = %d\n\n", ponteiro, &x);
	
	return 0;
}