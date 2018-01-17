#include <iostream>

using namespace std;

int main(void) {
	int in, out; in = out = 0;

	int n; cin >> n;

	while(n--) {
		int x; cin >> x;

		if(x >= 10 && x <= 20) in++;
		else out++;
	}

	cout << in << " in\n";
	cout << out << " out\n";

	return 0;
}
