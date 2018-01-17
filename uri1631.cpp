#include <iostream>
#include <cmath>
#include <cfloat>
#include <vector>
#include <iomanip>

using namespace std;

int n;
vector<pair<int, int> > pontos;

typedef struct reta {
	pair<int, int> pa, pb;
	int a, b, c;
} reta;

reta* nova_reta(pair<int, int> A, pair<int, int> B) {
	reta *r = (reta*)malloc(sizeof(reta));

	r->pa = A; r->pb = B;
	r->a = A.second - B.second;
	r->b = B.first - A.first;
	r->c = A.first*B.second - B.first*A.second;

	return r;
}

double dist(pair<int, int> p, reta r) {
	return (abs(r.a*p.first + r.b*p.second + r.c)) / sqrt(pow(r.a,2) + pow(r.b,2));
}

bool esq(pair<int, int> p, reta r) { // determinante
	pair<int, int> a = r.pa, b = r.pb;

	return ((b.first-a.first)*(p.second-a.second) - (b.second-a.second)*(p.first-a.first)) > 0;
}

double teste(int n) {
	double menor_dif = DBL_MAX;

	for(int i = 0; i < n; i++) { 
		for(int j = 0; j < n; j++) {
			reta *r = nova_reta(pontos[i], pontos[j]);
			double direita = 0, esquerda = 0;

			for(int k = 0; k < n; k++) {
				if(esq(pontos[k], *r)) esquerda += dist(pontos[k], *r);
				else direita += dist(pontos[k], *r);
			}

			if(abs(esquerda - direita) < menor_dif)
				menor_dif = abs(esquerda - direita);
		}
	}

	return menor_dif;
}

int main(void) {
	
	while(cin >> n, n != 0) {
		pontos.resize(n);
		
		for(int i = 0; i < n; i++) {
			double x, y;
			cin >> x >> y;
			// cout << "x = " << x << " y = " << y << endl;
			pontos[i].first = x; 
			pontos[i].second = y;
		}

		cout << setprecision(3) << fixed << teste(n) << endl;
	}

	return 0;
}
