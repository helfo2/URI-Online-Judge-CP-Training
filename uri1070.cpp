#include <iostream>

using namespace std;

void p(int n) {
	int i = 6;
	int x = (n%2==0) ? n+1 : n;
	
	while(i--) {
		cout << x << endl;
		x+=2;
	}
}

int main(void) {
	int n; cin >> n;

	p(n);

	return 0;
}
