#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ordena_notas(vector<vector<int> >& div, int n) {
	for(int i = 0; i < n; i++) sort(div[i].begin(), div[i].end());
}

int f(vector<vector<int> >& div, int t, int n) {
	int soma = 0;

	for(int i = 0; i < n; i++) {
		int b, a; b = a = 0;
		for(auto it = div[i].begin(); it != div[i].end(); it++) {
			if(*it < t) b++;
			else a++;
		}

		soma += abs(b - a);
	}
	
	return soma;
}

void limpa(vector<vector<int> >& v, int n) {
	for(int i = 0; i < n; i++)
		v[i].clear();

	v.clear();
}

int main(void) {
	int n;

	while(cin >> n, n!=0) {
		vector<vector<int> > div(n);

		int maior = 0;

		for(int i = 0; i < n; i++) {
			int q; cin >> q;
			while(q--) {
				int nota; cin >> nota;
				maior = max(maior, nota);
				div[i].push_back(nota);
			}
		}

		ordena_notas(div, n);

		int menor = 100000;

		for(int i = 0; i <= maior; i++)
			menor = min(menor, f(div, i, n));

		cout << menor << endl;

		limpa(div, n);
	}

	return 0;
}
