#include <iostream>

using namespace std;

int main(void) { 
	int n;

	while(cin >> n, n!=0) {
		int q = 0;
		for(int i = 1; i <= n; i++)
			q += i*i;

		cout << q << endl;
	}

	return 0;
}
