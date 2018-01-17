#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(void) { ios::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	int aux = n;
	set<int> s;
	map<int, int> m;

	while(aux--) {
		int t; cin >> t;
		if(s.find(t) == s.end()) s.insert(t);
		m[t]++;
	}

	for(auto i = s.begin() ; i != s.end(); i++) {
		cout << *i << " aparece " << m[*i] << " vez(es)\n";
	}

	return 0;
}
