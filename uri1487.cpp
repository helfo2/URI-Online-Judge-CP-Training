#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<int> duracao, pontos;
int n, t;

int uknapsack(int n) {
	vector<int> dp(t+1);

	for(int i = 0; i <= t; i++)
		for(int j = 0; j < n; j++)
			if(duracao[j] <= i)
				dp[i] = max(dp[i], dp[i-duracao[j]] + pontos[j]);

	return dp[t];
}

int main(void) {
	int k = 1;
	while(cin >> n >> t, n != 0) {
		duracao.resize(n); pontos.resize(n);

		for(int i = 0; i < n; i++) {
			int d, p; cin >> d >> p;
			duracao[i] = d; 
			pontos[i] = p;
		}

		cout << "Instancia " << k << endl; k++;
		cout <<  uknapsack(n) << endl;

		cout << endl;
	}

	return 0;
}
