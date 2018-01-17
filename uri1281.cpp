#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <iomanip>

using namespace std;

float busca(string f, vector<pair<string, float> >& l) {
	int sz = l.size();
	for(int i = 0; i < sz; i++) {
		if(f.compare(l[i].first) == 0) {
			return l[i].second;
		}
	}

	return -1;
}

int main(void) {
	int n; cin >> n;

	while(n--) { 
		int m; cin >> m;

		vector<pair<string, float> > lista(m);

		for(int i = 0; i < m; i++) {
			string fruta;
			float preco;
		
			cin >> fruta >> preco;
			lista[i] = make_pair(fruta, preco);
		}
		
		int p; cin >> p;
		
		float total = 0.0;
		while(p--) {
			string fruta;
			int q;

			cin >> fruta >> q;

			total += busca(fruta, lista) * q;
		}

		cout << "R$ " << fixed << setprecision(2) << total << endl;
		lista.clear();
	}
	
	return 0;
}
