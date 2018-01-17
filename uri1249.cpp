#include <iostream>

using namespace std;

int main(void) {
	string s;

	while(getline(cin, s)) {
		for(int i = 0; i < s.length(); i++) {
			if(isalpha(s[i])) {
				if(islower(s[i])) {
					if(s[i] + 13 > 'z') s[i] -= 13;
					else s[i] += 13;
				} else {
					if(s[i] + 13 > 'Z') s[i] -= 13;
					else s[i] += 13;
				}
			}
		}

		cout << s << endl;
	}

	return 0;
}
