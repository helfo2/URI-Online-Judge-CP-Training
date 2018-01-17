#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;

vector<pair<long long, pair<long long, long long> > > g;
vector<int> pai, valor;

void init() {
	pai.resize(n);
	valor.resize(n);
	
	for(int i = 0; i < n; i++) {
		pai[i] = i;
		valor[i] = 0;
	}
}

int acha_pai(int u) {
	if(u != pai[u]) pai[u] = acha_pai(pai[u]);
	return pai[u];
}

void junta(int x, int y) {
	x = acha_pai(x), y = acha_pai(y);

	if(valor[x] < valor[y]) pai[y] = x;
	else pai[x] = y;

	if(valor[x] == valor[y]) valor[y]++;
}


long long kruskal() {
	long long peso_agm = 0;

	init();

	sort(g.begin(), g.end());

	for(auto it : g) {
		int x = it.second.first, y = it.second.second;
		int set_x = acha_pai(x), set_y = acha_pai(y);

		if(set_x != set_y) {
			peso_agm += it.first;
			junta(set_x, set_y);
		}
	}

	return peso_agm;
}

int main(void) {
	while(cin >> n >> m, (n+m)) {
		g.resize(m);

		for(int i = 0; i < m; i++) {
			long long x, y, z; cin >> x >> y >> z;
			g[i] = make_pair(z, make_pair(x, y));
		}

		cout << kruskal() << endl;

		g.clear();
	}	

	return 0;
}
