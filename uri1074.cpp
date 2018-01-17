#include <iostream>

using namespace std;

void f(int x) {
	if(x == 0) cout << "NULL\n";
	else {
		if(x % 2 == 0) {
			cout << "EVEN ";

			if(x < 0) cout << "NEGATIVE\n";
			else cout << "POSITIVE\n";
		} else {
			cout << "ODD ";

			if(x < 0) cout << "NEGATIVE\n";
			else cout << "POSITIVE\n";
		}
	}
}

int main(void) { 
	int n; cin >> n;

	while(n--) {
		int x; cin >> x;

		f(x);
	}

	return 0;
}
