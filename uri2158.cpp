#include <iostream>

using namespace std;

int main(void) {
	long long fp, fh, mol = 1;

	while(cin >> fp >> fh) { 
		long long a = 0, l = 0;
		
		l = ((fp*5) + (fh*6)) / 2;
		a = l + 2 - (fp + fh);

		cout << "Molecula #" << mol << ".:.\n";
		cout << "Possui " << a << " atomos e " << l << " ligacoes\n\n";

		mol++;
	}
}
