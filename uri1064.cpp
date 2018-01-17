#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int n = 6;
	double q = 0.0, soma = 0.0;

	while(n--) {
		double i; cin >> i;
		if(i <= 0) continue;
		else {
			q++;
			soma += i;
		}
	}

	cout << q << " valores positivos\n";
	cout << fixed << setprecision(1) << soma/q << endl;
	return 0;
}
