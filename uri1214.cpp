#include <iostream>
#include <iomanip>

using namespace std;

double media(int n, int **notas) {
	int soma = 0;
	
	for(int i = 0; i < n; i++) {
		int nota; cin >> nota;
		(*notas)[i] = nota;
		soma += nota;
	}

	return soma/(double)n;
}

double acima_media(int n, int **notas, double m) {
	int cont = 0;

	for(int i = 0; i < n; i++) {
		if((double)(*notas)[i] > m)
			cont++;
	}

	return cont/(double)n * 100;
}

int main(void) {
	int c; cin >> c;

	while(c--) {
		int n; cin >> n;

		int *notas = new int[n];
		
		cout << fixed << setprecision(3) << acima_media(n, &notas, media(n, &notas)) << "%\n";

		delete [] notas;
	}

	return 0;
}
