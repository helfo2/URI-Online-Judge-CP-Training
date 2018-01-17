#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const int a, const int b) {
	return b < a;
}

int main(void) {
	int n, k;

	while(cin >> n >> k) {
		int fila[1001], dist[1001];

		fila[0] = dist[0] = 0;

		for(int i = 1; i < n; i++) {
			cin >> fila[i];
			dist[i] = fila[i] - fila[i-1];
		}

		sort(dist, dist+n, comp);

		int s = 0;
		for(int i = k-1; i < n; i++)
			s += dist[i];

		cout << s << endl;
	}

	return 0;
}
