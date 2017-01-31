#include <stdio.h>

int main() {
	
	FILE *file;
	file = fopen("Teste.txt", "w"); // w = write | r = read | a = alter
	fprintf(file, "GNU is not UNIX");
	fclose(file);
	
	return 0;
}