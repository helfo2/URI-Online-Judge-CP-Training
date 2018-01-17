#include <iostream>

using namespace std;

int main(void) {
	int n = 5;

	int c = 0;
	while(n--) {
		int i; cin >> i;
		if(i % 2 == 0) c++;
	}

	cout << c << " valores pares\n";
	return 0;
}
