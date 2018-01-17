#include <iostream>
#include <cmath>

using namespace std;

bool primo(long long x) {
	for(long long i = 3; i < sqrt(x); i++)
		if(x % i == 0) return false;
	return true;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		long long x; cin >> x;

		if(x == 2) cout << "Prime\n";
		else if(x % 2 == 0) cout << "Not Prime\n";
		else cout << (primo(x) ? "Prime\n" : "Not Prime\n");
	}
	
	return 0;
}
