#include <stdio.h>

int main() {
	
	int *p = (int *) malloc(sizeof(int));
	
	*p = 1000;
	
	printf("%d\n", *p);
	
	free(p); //Devolve a memoria alocada para o sistema operacional
	
	return 0;
}