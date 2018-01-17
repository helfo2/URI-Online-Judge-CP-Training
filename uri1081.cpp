#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define max 21

vector<vector<int> > graph;
vector<int> visited;
set<int> aux;

int n, v, e;
int b = 2;

void print_space() {
	for(int i = 0; i < b; i++) {
		printf(" ");
	}
}

void clear() {
	visited.clear();
	graph.clear();
	aux.clear();
}

void dfs(int u) {
	visited[u]=1;

	for(int w = 0; w < v; w++) {
		if(graph[u][w] == 1) {
			if(visited[w] == 0) {
				print_space();
				printf("%d-%d pathR(G,%d)\n", u, w, w);

				b+=2;
				dfs(w);
				b-=2;
			} else {
				print_space();
				printf("%d-%d\n", u, w);
			}
		}
	}
}

void check() {
	for(int i = 0; i <= v; i++) {
		if(visited[i] == 0 && aux.find(i) != aux.end()) {
			printf("\n");
			dfs(i);
		}
	}
}

void print_graph() {
	for(int i = 0; i < v; i++) {
		for(int j = 0; j < v; j++) { 
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	scanf("%d", &n);
	int k = 1;

	while(n--) {
		scanf("%d%d", &v, &e);

		graph.resize(v); visited.resize(v);
		for(int i = 0; i < v; i++) {
			graph[i].resize(v);
		}

		int x, y;
		for(int i = 0; i < e; i++) {
			scanf("%d%d", &x, &y);
			graph[x][y] = 1;
			aux.insert(x); aux.insert(y);
		}

		// print_graph();

		printf("Caso %d:\n", k); k++;

		dfs(0);

		check();

		printf("\n");
		clear();
	}

	return 0;
}
