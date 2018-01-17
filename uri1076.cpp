#include <iostream>
#include <vector>

using namespace std;

int v, a;
vector<vector<int> > g;
vector<int> visitado;
int mov;

void limpa() {
	for(int i = 0; i < v; i++)
		g[i].clear();
	g.clear();

	visitado.clear();
}

int dfs(int i) {
	visitado[i] = 1;

	for(int u = 0; u < v; u++) {
		if(g[i][u] == 1 && !visitado[u]) {
			mov++;
			dfs(u);
			mov++;
		}
	}

	return mov;
}

int main(void) {
	int t; cin >> t;

	while(t--) {
		int ini; cin >> ini;
		cin >> v >> a;

		g.resize(v, vector<int>(v));
		visitado.resize(v, 0);

		while(a--) {
			int u, v; cin >> u >> v;
			g[u][v] = 1; g[v][u] = 1;
		}

		mov = 0;
		cout << dfs(ini) << endl;

		limpa();
	}

	return 0;
}
