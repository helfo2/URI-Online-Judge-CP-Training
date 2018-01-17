#include <iostream>
#include <string>

using namespace std;

string f(int n) {
	switch(n) {
		case 61: return "Brasilia";
		case 71: return "Salvador";
		case 11: return "Sao Paulo";
		case 21: return "Rio de Janeiro";
		case 32: return "Juiz de Fora";
		case 19: return "Campinas";
		case 27: return "Vitoria";
		case 31: return "Belo Horizonte";
		default: return "DDD nao cadastrado";
	}
}

int main(void) {
	int n; cin >> n;

	cout << f(n) << endl;

	return 0;
}
