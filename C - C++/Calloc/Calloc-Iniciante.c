#include <stdio.h>

int main() {
	
	int *p, i;
	p = (int *) calloc(5, sizeof(int)); // Como se fosse um vetor de 5 posições
	
	*p = 10; // casa zero -> *(p + 0) = 10;
	*(p + 1) = 20; // casa 1
	
	for(i = 0; i < 5; i++){
		printf("%d\n", *(p + i));
	}
	
	printf("\n\n");
	
	for(i = 0; i < 5; i++){
		printf("%d\n", p[i]);
	}
	
	/*
		Para mostrar o conteudo alocado:
		*p
		*(p + 1)
		*(p + 2)
		...
		
		OU
		
		p[0]
		p[1]
		p[2]
		...
	*/

	return 0;
}