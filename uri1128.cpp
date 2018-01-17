#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <set>

using namespace std;

int n, m;
list<int> *g;
list<int> *g_r;
vector<bool> visitado;
set<set<int> > con;
set<int> aux;

bool busca(vector<int> v, int x) {
	for(auto it : v)
		if(it == x) return true;
	return false;
}  

void add(int m) {
	while(m--) {
		int v, w, p; cin >> v >> w >> p;

		if(p == 1) {
			g[v].push_back(w);
			g_r[w].push_back(v);
		}
		else {
			g[v].push_back(w);
			g[w].push_back(v);

			g_r[v].push_back(w);
			g_r[w].push_back(v);
		}
	}
}

void dfs(int i) {
	visitado[i] = true;
	
	aux.insert(i);

	for(auto it : g_r[i])
		if(!visitado[it]) dfs(it);
}

void dfs_aux(int i, stack<int>& p) {
	visitado[i] = true;

	for(auto it : g[i])
		if(!visitado[it]) dfs_aux(it, p);

	p.push(i);
}

int main(void) {
	while(cin >> n >> m, (n+m)) {
		g = new list<int>[n+1];
		g_r = new list<int>[n+1];
		add(m);

		visitado.resize(n+1, false);
		
		stack<int> p;

		for(int i = 1; i <= n; i++)
			if(!visitado[i]) dfs_aux(i, p);

		visitado.clear();
		visitado.resize(n+1, false);
		
		while(!p.empty()) {
			int v = p.top();
			p.pop();

			if(!visitado[v]) {
				dfs(v);
				con.insert(aux);
			}
		}

		if(con.size() == 1) cout << "1\n";
		else cout << "0\n";

		visitado.clear();
		con.clear(); aux.clear();
		delete [] g;
		delete [] g_r;
	}

	return 0;
}
