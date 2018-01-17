#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int elimina(vector<string>& l) {
	int sz = l[0].size();
	int e_max = 0, e = 0;

	for(int i = 0; i < l.size()-1; i++) {
		int j = 0;
		while(j < sz && l[i][j] == l[i+1][j]) {
			e++; j++;
		}

		e_max = max(e_max, e);
	}

	return e_max;
}

int main(void) {
	int n;

	vector<string> lista;

	while(cin >> n) {
		lista.resize(n);

		for(int i = 0; i < n; i++)
			cin >> lista[i];

		sort(lista.begin(), lista.end());

		cout << elimina(lista) << endl;

		lista.clear();
	}

	return 0;
}
