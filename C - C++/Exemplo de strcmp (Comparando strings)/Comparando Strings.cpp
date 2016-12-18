#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char A[30] = "ovo", B[30] = "ovo";
	
	if(strcmp(A,B)){
		cout << "Diferentes";
	}else{
		cout << "eh igual";
	}
	return 0;
}