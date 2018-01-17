#include <iostream>

using namespace std;

int main(void) { 
	int i = 6;

	int cont = 0;
	while(i--) {
		float n; cin >> n;

		if(n > 0) cont++; 
	}

	cout << cont << " valores positivos\n";

	return 0;
}
