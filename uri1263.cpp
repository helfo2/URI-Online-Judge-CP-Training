#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <utility>

using namespace std;

int main(void) {
	string s;

	while(getline(cin, s)) {
		stringstream ss;
		ss << s;

		string t;
		char c = tolower(s[0]);
		ss >> t;

		int a = 0;
		
		bool f = true;
		while(ss >> t) {
			char atual = tolower(t[0]);

			if(c == atual) {
				if(f) a++;
				f = false;
			} else f = true;

			c = atual;
		}

		cout << a << endl;
	}

	return 0;
}
