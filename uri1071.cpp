#include <iostream>

using namespace std;

int main(void) {
	int x, y; cin >> x >> y;
	
	int maior = (x >= y) ? x : y;
	int menor = (x < y) ? x : y;

	int s = 0;
	for(int i = menor + 1; i < maior; i++) {
		if(abs(i) % 2 == 1)
			s += i;
	}

	cout << s << endl;

	return 0;
}
