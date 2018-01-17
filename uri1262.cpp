#include <iostream>
#include <string>

using namespace std;

int solve(string s, int p) {
	int ciclos = 0;

	int r = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'W') {
			if(r > 0) {
				r = 0;
				ciclos++;
			}

			ciclos++;
		} else {
			r++;
			if(r == p) {
				r = 0; ciclos++;
			}
		} 
	}

	if(r > 0) ciclos++;
	return ciclos;
}

int main(void) {
	string rastro;
	int p;

	while(cin >> rastro >> p) {
		cout << solve(rastro, p) << endl;
	}

	return 0;
}
