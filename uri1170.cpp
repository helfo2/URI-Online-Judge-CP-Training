#include <iostream>
#include <cmath>

using namespace std;

int main(void) { 
	int n; cin >> n;
	float c;

	while(n--) {
		cin >> c;

		cout << ceil(log2(c)) << " dias" << endl;
	}

	return 0;
}
