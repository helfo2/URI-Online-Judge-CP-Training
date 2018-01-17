#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define PEDIDOSMAX 21
#define PIZZASMAX 31

int m[PEDIDOSMAX][PIZZASMAX];

int main(void) {
	int n; 

	while(cin >> n && n) {
		int max_p; cin >> max_p;

		vector<pair<int, int> > pedidos(n+1);

		for(int i = 1; i <= n; i++)
			cin >> pedidos[i].first >> pedidos[i].second;

		for(int i = 0; i <= n; i++) {
			for(int j = 0; j <= max_p; j++) {
				if(i == 0 || j == 0) m[i][j] = 0;
				else {
					if(pedidos[i].second > j) 
						m[i][j] = m[i-1][j];
					else 
						m[i][j] = max(m[i-1][j-pedidos[i].second] + pedidos[i].first, m[i-1][j]);
				}
			}
		}

		cout << m[n][max_p] << " min.\n";
	}

	return 0;
}
