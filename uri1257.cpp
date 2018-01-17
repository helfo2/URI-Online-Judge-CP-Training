#include <iostream>

using namespace std;

int main(void) {
	int n; cin >> n;

	while(n--) {
		int l; cin >> l;

		int hash = 0;
		for(int i = 0; i < l; i++) {
			string s; cin >> s;

			for(int j = 0; j < s.length(); j++)
				hash += ((int)s[j] - (int)'A') + i + j;
		}

		cout << hash << endl;
	}

	return 0;	
}
