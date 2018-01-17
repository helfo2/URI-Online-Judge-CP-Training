#include <iostream>
#include <set>

using namespace std;

int main(void) {
	int a, b;

	while(cin >> a >> b, (a+b)) {
		set<int> sa, sb;

		while(a--) {
			int t; cin >> t;
			sa.insert(t);
		}
		while(b--) {
			int t; cin >> t;
			sb.insert(t);
		}
		
		set<int> auxa, auxb;
		for(auto& i : sa) if(!sb.count(i)) auxa.insert(i);
		for(auto& i : sb) if(!sa.count(i)) auxb.insert(i);
		
		cout << min(auxa.size(), auxb.size()) << endl;
	}
	
	return 0;
}
