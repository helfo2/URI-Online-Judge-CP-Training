#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int v, e;

vector<pair<long long, pair<int, int> > > arestas;

void add(long long p, int a, int b) {
	arestas.push_back(make_pair(p, make_pair(a, b)));
}

vector<int> pai, valor;

void init_ciclos(int n) {
	pai.resize(n);
	valor.resize(n);

	for(int i = 0; i < n; i++){ 
		pai[i] = i;
		valor[i] = 0;
	}
}

int acha_pai(int u) { 
	if(u != pai[u])
		pai[u] = acha_pai(pai[u]);
	return pai[u];
}

void junta(int x, int y) { 
	x = acha_pai(x); y = acha_pai(y);

	if(valor[x] < valor[y]) pai[y] = x;
	else pai[x] = y;

	if(valor[x] == valor[y]) valor[y]++;
}

long long kruskal() {
	long long peso_agm = 0;

	sort(arestas.begin(), arestas.end());

	init_ciclos(v);

	for(auto it = arestas.begin(); it != arestas.end(); ++it) {
		int u = it->second.first, v = it->second.second;
		int set_u = acha_pai(u), set_v = acha_pai(v);

		if(set_u != set_v) {
			peso_agm += it->first;
			junta(set_u, set_v);
		}
	}

	return peso_agm;
}

int main(void) {
	while(cin >> v >> e && (v + e)) {
		int x, y;
		long long p;
		long long peso_grafo = 0;

		for(int i = 0; i < e; i++) {
			cin >> x >> y >> p;
			add(p, x, y);
			peso_grafo += p;
		}

		cout << peso_grafo - kruskal() << endl;

		arestas.clear();
	}
	
	return 0;
}
