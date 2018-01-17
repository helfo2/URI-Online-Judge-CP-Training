#include <iostream>

using namespace std;

char f(int x) {
	switch(x) {
		case 0: return 'A';
		case 1: return 'B';
		case 2: return 'C';
		case 3: return 'D';
		case 4: return 'E';
		default: break;
	}

	return '*';
}

int main(void) {
	int n; 

	while(cin >> n, n!=0) {
		while(n--) {
			int q = 0;
			int r = -1;
			
			for(int i = 0; i < 5; i++) {
				int t; cin >> t;

				if(t <= 127) {
					r = i;
					q++;
				}
			}

			if(q > 1) cout << "*\n";
			else cout << f(r) << endl;
		}
	}

	return 0;
}
