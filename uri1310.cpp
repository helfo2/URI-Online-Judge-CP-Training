#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, custo_dia;

	while(cin >> n >> custo_dia) { 
		vector<int> receita(n);

		for(int i = 0; i < n; i++) cin >> receita[i];

		int lucro = 0;
		int soma;

		for(int i = 1; i <= n; i++) {
			
			for(int j = 0; j < n - i + 1; j++) {
				soma = 0;
				for(int k = j; k < i+j; k++) {
					soma += receita[k];	
				}
				// cout << "soma = " << soma << endl;
				if(soma >= i * custo_dia) {
					lucro = max(lucro, soma - i * custo_dia);
				}
				// cout << "lucro = " << soma << endl;
			}

		}

		cout << lucro << endl;
	}
	
	return 0;
}
