#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void) {
	int n, b;

	while(cin >> n >> b, (n+b)) {
		vector<int> v(b);
		for(int i = 0; i < b; i++) cin >> v[i];

		set<int> s;
		vector<int> bingo;
		for(int i = 0; i < b; i++) {
			for(int	j = i+1; j < b; j++) {
				int dif = abs(v[i]-v[j]);
				if(s.find(dif) == s.end()) {
					s.insert(dif);	
					bingo.push_back(dif);
				}
			}
		}

		if(bingo.size() == n) cout << "Y\n";
		else cout << "N\n";
	}

	return 0;
}
