#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dp(vector<int>& v, int s) {
	int *somas = new int [s+1];

	somas[0] = 0;

	for(int i = 1; i <= s; i++) {
		somas[i] = 999999999;

		for(int j = 0; j < v.size(); j++) {
			if(i - v[j] >= 0) 
				somas[i] = min(somas[i], somas[i-v[j]]+1);
		}
	}

	int resp = somas[s];

	delete [] somas;
	return resp;
}

int main(void) {
	int t; cin >> t;

	while(t--) {
		int n, m; cin >> n >> m;

		vector<int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];

		cout << dp(v, m) << endl;

	}

	return 0;
}
