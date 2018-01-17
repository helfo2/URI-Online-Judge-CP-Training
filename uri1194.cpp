#include <iostream>
#include <string>

using namespace std;

int atual;
string prefixa, infixa; 

void f(int b, int e) {
	if(b <= e) {
		atual++;
		int i = infixa.find(prefixa[atual]);
		f(b, i-1);
		f(i+1, e);
		cout << infixa[i];
	}
}

int main(void) { 
	int c; cin >> c;

	while(c--) { 
		int n; cin >> n;
		cin >> prefixa >> infixa;

		atual = -1;

		f(0, n-1);

		cout << endl;
	}
	
	return 0;
}
