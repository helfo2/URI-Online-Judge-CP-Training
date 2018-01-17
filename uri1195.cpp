#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct no {
	int v;
	no *e, *d;
	no(int _v) : v(_v), e(NULL), d(NULL) {};
};

no* add(no* arvore, int v) {
	if(arvore == NULL) return new no(v);
	if(v < arvore->v) arvore->e = add(arvore->e, v);
	else arvore->d = add(arvore->d, v);

	return arvore;
}

void preordem(no* arvore, vector<int>& pre) {
	if(arvore == NULL) return;
	pre.push_back(arvore->v);
	preordem(arvore->e, pre);
	preordem(arvore->d, pre);
}

void inordem(no* arvore, vector<int>& in) {
	if(arvore == NULL) return;
	inordem(arvore->e, in);
	in.push_back(arvore->v);
	inordem(arvore->d, in);
}

void posordem(no* arvore, vector<int>& pos) {
	if(arvore == NULL) return;
	posordem(arvore->e, pos);
	posordem(arvore->d, pos);
	pos.push_back(arvore->v);
}

void print(vector<int>& v) {
	cout << *v.begin();
	for(auto it = v.begin()+1; it != v.end(); it++)
		cout << " " << *it;
	cout << endl;
}

int main(void) {
	int c; cin >> c;

	for(int k = 1; k <= c; k++) {
		int n; cin >> n;

		int t;
		no *arvore = NULL;

		for(int i = 0; i < n; i++) {
			cin >> t;
			arvore = add(arvore, t);
		}

		vector<int> pre, in, pos;

		preordem(arvore, pre);
		inordem(arvore, in);
		posordem(arvore, pos);

		cout << "Case " << k << ":\n";
		
		cout << "Pre.: ";
		print(pre);

		cout << "In..: ";
		print(in);

		cout << "Post: ";
		print(pos);

		cout << endl;
	}

	return 0;
}
