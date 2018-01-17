#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s1, s2;

	while(getline(cin, s1) && getline(cin, s2)) {
		int sub = 0;

		for(int i = 0; i < s1.length(); i++) {
			for(int j = 0; j < s2.length(); j++) {
				if(s1[i] == s2[j]) {
					int n = 0;

					for(int k = 0; k+i < s1.length() && k+j < s2.length(); k++) {
						if(s1[k+i] != s2[k+j]) break;
						n++;
					}

					sub = max(sub, n);
				}
			}
		}

		cout << sub << endl;
	}

	return 0;
}
