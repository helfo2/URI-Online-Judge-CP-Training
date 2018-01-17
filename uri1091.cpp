#include <iostream>

using namespace std;

int m, n;

string testa(int x, int y) {
	if(x == m || y == n) return "divisa";
	else if(x > m && y > n) return "NE";
	else if(x < m && y > n) return "NO";
	else if(x > m && y < n) return "SE";
	else if(x < m && y < n) return "SO";

	return "";
}

int main(void) {
	int k;

	while(cin >> k, k != 0) {
		cin >> m >> n;

		while(k--) {
			int x, y; cin >> x >> y;

			cout << testa(x, y) << endl;
		}
	}

	return 0;
}
