#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string teclado = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(void) {
	string s;

	while(getline(cin, s)) {
		for(auto& c : s) {
			if(c == ' ') continue;
			auto it = find(teclado.begin(), teclado.end(), c);
			c = *(it-1);
		}
		cout << s << endl;
	}

	return 0;
}
