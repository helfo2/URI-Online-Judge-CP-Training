#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
	string s;

	while(getline(cin, s)) {
		stringstream ss;
		ss << s;

		string t;
		ss >> t; 

		char c = t[0];

		c = tolower(c);

		if(c == '*') break;

		bool tauto = true;
		while(ss >> t) {
			if(c != tolower(t[0])) {
				tauto = false;
				break;
			}
		}

		cout << ((tauto) ? "Y\n" : "N\n");
	}

	return 0;
}
