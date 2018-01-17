#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int t; cin >> t;

	while(t--) {
		int d, i, b; cin >> d >> i >> b;

		vector<int> preco(i);
		for(int c = 0; c < i; c++)
			cin >> preco[c];

		int max_bolos = 0;
		while(b--) {
			int q; cin >> q;

			int custo = 0;
			while(q--) {
				int ingr, qtd; cin >> ingr >> qtd;
				custo += (preco[ingr] * qtd);
			}

			max_bolos = max(max_bolos, d/custo);
		}

		cout << max_bolos << endl;
	}


	return 0;
}
