#include <iostream>
#include <map>
#include <list>

using namespace std;

int main(void) {
	int n; cin >> n;

	while(n--) {
		int m, c; cin >> m >> c;

		list<int> *lista = new list<int>[m];

		for(int i = 0; i < c; i++) {
			int chave; cin >> chave;
			lista[chave % m].push_back(chave);
		}

		for(int i = 0; i < m; i++) {
			cout << i << " -> ";
			if(lista[i].size() != 0) {
				for(auto it = lista[i].begin(); it != lista[i].end(); it++) {
					cout << *it << " -> ";
				}
				cout << "\\\n";
			} else cout << "\\\n";
		}

		if(n != 0) cout << endl;

		delete [] lista;
	}

	return 0;
}
