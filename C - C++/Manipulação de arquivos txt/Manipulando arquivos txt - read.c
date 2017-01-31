#include <stdio.h>

int main() {
	
	FILE *file;
	file = fopen("numeros.txt", "r"); // w = write | r = read | a = alter
	
	if(file == NULL){
		printf("Arquivo nao encontrado ou nao pode ser aberto\n");
		system("pause");
		return 0;
	}
	
	int x, y, z;
	fscanf(file, "%d %d %d", &x, &y, &z);
	printf("%d %d %d", x, y, z);
	fclose(file);
	
	return 0;
}