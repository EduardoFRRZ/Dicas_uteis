#include <stdio.h>

int main() {
	
	int vetor[] = {1, 2, 3};
	int *ponteiro, *ponteiro_2;
	ponteiro = vetor;  //Quando se trata de vetor, o compilador faz com que o ponteiro aponte para o primeiro membro do vetor, e nao precisa do &.
	ponteiro_2 = &vetor[2]; // Aqui precisa do &, pois estou for�ando o ponteiro a apontar para a posi�ao 2 do vetor.
	
	printf("%d\n", *ponteiro);
	printf("%d\n", *ponteiro_2);
	
	return 0;
}