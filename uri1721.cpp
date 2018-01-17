#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

typedef struct {
	char *nome;
	double la, lo;
} cidade;

// double dist(int i, int x, int y) {

// }

int busca(vector<cidade>& c, char *x) {
	for(int i = 0; i < c.size(); i++) {
		if(strcmp(x, c[i].nome) == 0) 
			return i;
	}

	return -1;
}

int main(void) {
	char *nome = (char*)malloc(31 * sizeof(char));
	double la, lo;

	vector<cidade> cidades;
	cidade c;

	while(cin >> nome, strcmp(nome, "#") != 0) {
		cin >> la >> lo;
		c.nome = (char*)malloc(31 * sizeof(char));
		strcpy(c.nome, nome);
		c.la = la; c.lo = lo;
		cidades.push_back(c);
	} 

	char a[31], b[31], m[31];

	while(cin >> a, strcmp(a, "#") != 0) {
		cin >> b >> m;

		int acheim = busca(cidades, m), x = busca(cidades, a), y = busca(cidades, b);

		if(acheim == -1 || x == -1 || y == -1) {
			cout << m << " is ? km off " << a << "/" << b << " equidistance.\n";
		} else {
			double lamba = cidades[y].lo - cidades[x].lo;
			double cosd = sin(cidades[x].la)*sin(cidades[y].la) + cos(cidades[x].lo)*cos(cidades[y].lo)*cos(lamba);
			double dist = acos(cosd)/2;
			cout << 6378 * dist << endl;
			// cout << m << " is " << dist() << " km off " << a << "/" << b << " equidistance.\n";
		}
	}

	return 0;
}
