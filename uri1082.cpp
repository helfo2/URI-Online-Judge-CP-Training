#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

#define M 26

using namespace std;

vector<vector<int> > g;
vector<int> visitado;
vector<bool> alfa;
vector<int> *componente;

int V, E; 
int componentes;

void limpa() {
	for(int i = 0; i < V; i++)
		g[i].clear();
	g.clear();
	visitado.clear();
	alfa.clear();
	delete [] componente;
}

void add(int u, int v) {
	g[u][v] = 1;
	g[v][u] = 1;
}

void dfs(int v) {
	visitado[v] = true;
	// printf("%c,", v+'a');

	componente[componentes].push_back(v);
	
	for(int i = 0; i < V; i++) {
		if(g[v][i] == 1 && !visitado[i]) {
			dfs(i);
		}
	}
}

void macro_dfs() {
	for(int i = 0; i < V; i++) {
		if(!visitado[i]) {
			dfs(i);
			// cout << "\n";
			componentes++;
		}
	}
}

void check_alfa() {
	for(int i = 0; i < V; i++) {
		if(!alfa[i]) {
			add(i, i);
		}
	}
}

int main(void) {
	int N; cin >> N;

	int n = 1;
	while(N--) {
		cin >> V >> E;

		g.resize(V, vector<int>(V));

		visitado.resize(V, false);
		alfa.resize(V, false);

		while(E--) {
			char u, v; cin >> u >> v;
			add(u - 'a', v - 'a');
			alfa[u - 'a'] = true; alfa[v - 'a'] = true;
		}

		componente = new vector<int>[V];

		cout << "Case #" << n << ":\n"; n++;

		componentes = 0;
		macro_dfs();

		for(int i = 0; i < componentes; i++) {
			sort(componente[i].begin(), componente[i].end());
			
			for(auto c = componente[i].begin(); c != componente[i].end(); c++)
				cout << (char)(*c + 'a') << ",";
			cout << "\n";
		}

		cout << componentes << " connected components\n\n";

		limpa();
	}

	return 0;
}
