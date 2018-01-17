#include <iostream>

using namespace std;

int carry(int a, int b) {
	int c = 0;
	bool last = false;
	int maior = max(a, b);

	while(maior > 0) {
		if(last == true) {
			if(a%10 + b%10 + 1 > 9) {
				c++;
				last = true;
			} else last = false;
		} else {
			if(a%10 + b%10 > 9) {
				c++;
				last = true;
			} else last = false;
		}

		a /= 10; b /= 10;
		maior /= 10;
	}

	return c;
}

int main(void) {
	int a, b;

	while(cin >> a >> b, (a+b)) { 
		int c = carry(a, b);

		if(c == 0) cout << "No carry operation.\n";
		else if(c == 1) cout << c << " carry operation.\n";
		else cout << c << " carry operations.\n";
	}

	return 0;
}
