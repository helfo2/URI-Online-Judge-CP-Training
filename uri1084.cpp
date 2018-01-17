#include <iostream>

using namespace std;

int main(void) {
	int n, d;

	while(cin >> n >> d && (n + d)) {
		char num[n+1], premio[n+1];

		cin >> num;

		int t = -1, p = 0;

		while(d > 0) { 
			if(t == -1)
				premio[++t] = num[p++];

			if(premio[t] < num[p]) {
				t--; d--;
				continue;
			}

			premio[++t] = num[p++];

			if(p == n) {
				while(d--) t--;
			}
		}

		for(int i = p; i < n; ++i) {
			premio[++t] = num[i];
		}
		premio[t+1] = '\0';

		cout << premio << endl;

	}

	return 0;
}
