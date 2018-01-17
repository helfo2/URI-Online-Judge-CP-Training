#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main(void) {
	int n, l, c;

	while(cin >> n >> l >> c) {
		string buff; cin.ignore();
		getline(cin, buff);

		istringstream ss(buff);

		string palavra;

		int cont_c = 0, cont_l = 0, pag = 0;
		while(getline(ss, palavra, ' ')) {
			cont_c += (1 + palavra.length());

			if(cont_c == c) {
				cont_c = 0;
				cont_l++;
			}
			else if(cont_c > c) {
				if(cont_c == c + 1) {
					cont_c = 0;
					cont_l++;
				} else {
					cont_c = (palavra.length()+1);
					cont_l++;
				}
			}
		}

		if(cont_c > 0) cont_l++;
		cout << ceil(cont_l / (float)l) << endl;
	}

	return 0;
}
