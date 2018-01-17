#include <iostream>
#include <list>
#include <vector>

using namespace std;

list<int> *g;
int n, m;
vector<bool> visitado, back_edge;

void add(int a, int b) {
	// cout << a << " " << b << endl;
	g[a].push_back(b);
}

bool dfs(int v) {
	if(!visitado[v]) {
		// cout << "ok" << endl;
		visitado[v] = back_edge[v] = true;

		for(auto i = g[v].begin(); i != g[v].end(); ++i) {
			if(!visitado[*i] && dfs(*i)) return true;
			else if(back_edge[*i]) return true;
		}
	}

	back_edge[v] = false;
	return false;
}

bool testaciclo() {
	for(int i = 0; i < n; i++)
		if(dfs(i)) return true;

	return false;
}

int main(void) {
	int t; cin >> t;

	while(t--) {
		cin >> n >> m;

		g = new list<int>[n];
		visitado.resize(n, false);
		back_edge.resize(n, false);

		while(m--) {
			int a, b; cin >> a >> b;
			add(a-1, b-1);
		}

		cout << (testaciclo() ? "SIM" : "NAO") << endl;

		g = NULL;
		delete [] g;

		visitado.clear();
		back_edge.clear();
	}

	return 0;
}
