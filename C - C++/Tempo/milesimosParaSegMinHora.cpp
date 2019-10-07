#include <iostream>
using namespace std;

int main() {
	
	int milesimo,
	segundo = 0,
	minuto = 0,
	hora = 0;
	
	cin >> milesimo;
	
	while(milesimo >= 1000) {
		if(milesimo >= 1000) {
			segundo++;
			milesimo = milesimo - 1000;
		}
		if(segundo == 60) {
			minuto++;
			segundo = 0;
		}
		if(minuto == 60) {
			hora++;
			minuto = 0;
			segundo = 0;			
		}
	}
	
	cout << hora << " : " << minuto << " : " << segundo << " : " << milesimo << endl;
	
	return 0;
}