#include <iostream>

using namespace std;

void desloca() {
	string s; cin >> s;
	int d; cin >> d;
	
	for(int i = 0; i < s.length(); i++) {
		char c = (s[i] - d);

		if(c < 'A') c += 26;
		s[i] = c;
	}

	cout << s << endl;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		desloca();
	}

	return 0;
}
