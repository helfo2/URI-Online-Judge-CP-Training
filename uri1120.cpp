#include <iostream>
#include <string>

using namespace std;

int main (void) {
	int i;
	char d;
	string n, resultado;
	string::iterator it;

	while(1) {
		cin >> d;
		cin >> n;

		if(d == '0' && n[0] == '0') break;

		for(it = n.begin(); it != n.end(); it++) {
			if(*it != d) {
				resultado.push_back(*it);
			}
		}

		if(resultado.size() == 0) printf("0\n");
		else {
			i = 0;
			
			while(resultado.size() > 1 && resultado[i] == '0') resultado.erase(0, 1);
			cout << resultado << endl;
		}
		
		resultado.clear();
	}

	return 0;
}