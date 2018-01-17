#include <iostream>
#include <vector>

using namespace std;

vector<int> primos;

bool primo(int n) { 
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i < n; i += 2)
		if(n % i == 0) return false;
	
	return true;
} 

void preenche_primos() {
	for(int i = 2; i <= 100000; i++)
		if(primo(i)) primos.push_back(i);
}

int main(void) { 
	int n;

	preenche_primos();

	while(cin >> n, n!=0) {
		vector<int> v(n);

		for(int i = 0; i < n; i++) v[i] = i+1;
		
		int aux = 0;
		int p = (primos[aux]-1)%v.size();
		
		while(v.size() > 1) {
			// cout << "p = " << p << endl;
			// cout << "primo = " << primos[aux] << endl;
			// cout << "apagado = " << *(v.begin()+p) << endl;
			v.erase(v.begin()+p);
			aux++;
			p = (p-1+primos[aux])%v.size();
			
		}

		cout << *v.begin() << endl;
		v.clear();
	}

	return 0;
}
