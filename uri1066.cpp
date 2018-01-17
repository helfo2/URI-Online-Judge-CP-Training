#include <iostream>

using namespace std;

int main(void) {
	int n = 5;
	int par = 0, impar = 0, pos = 0, neg = 0;

	while(n--) {
		int x; cin >> x;

		if(x % 2 == 0) par++;
		else impar++;

		if(x < 0) neg++;
		else if(x > 0) pos++;
	}

	cout << par << " valor(es) par(es)\n";
	cout << impar << " valor(es) impar(es)\n";
	cout << pos << " valor(es) positivo(s)\n";
	cout << neg << " valor(es) negativo(s)\n";

	return 0;
}
