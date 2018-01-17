#include <iostream>

using namespace std;

long long mdc(long long a, long long b) {
	long long t;
	while(b != 0) {
		t = b;
		b = a%b;
		a = t;
	}

	return a;
}

long long mmc(long long a, long long b) {
	return a*b/mdc(a,b);
}

long long conta(long long n, long long a, long long b) { 
	return n/a + n/b - n/mmc(a,b);
}

int main(void) { ios::sync_with_stdio(false); cin.tie(0);
	long long n, a, b;

	while(cin >> n >> a >> b && (n+a+b))
		cout << conta(n, a, b) << endl;

	return 0;
}
