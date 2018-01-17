#include <iostream>

using namespace std;

int led(char c) {
	switch(c) {
		case '0': return 6;
				  break;
		case '1': return 2;
				  break;
		case '2': return 5;
				  break;
		case '3': return 5;
				  break;
		case '4': return 4;
				  break;
		case '5': return 5;
				  break;
		case '6': return 6;
				  break;
		case '7': return 3;
				  break;
		case '8': return 7;
				  break;
		case '9': return 6;
				  break;
		default: break;
	}
	return -1;
}

int main(void) {
	int n; cin >> n;
	string num;

	while(n--) {
		cin >> num;
		unsigned long long soma = 0;
		for(unsigned long long i = 0; i < num.size(); i++) {
			soma += led(num[i]);
		}

		cout << soma << " leds" << endl;
	}

	return 0;
}
