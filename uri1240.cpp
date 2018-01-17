#include <iostream>

using namespace std;

bool encaixa(long long unsigned a, long long unsigned b) { 
	if(a < b) return false;
	else {
		while(b > 0) {
			int bi = b%10, ai = a%10;

			if(bi != ai) return false;
			b /= 10; a /= 10;
		}

		return true;
	}
}

int main(void) { 
	int n; cin >> n;

	while(n--) {
		long long unsigned a, b; cin >> a >> b;
		cout << (encaixa(a, b) ? "encaixa\n" : "nao encaixa\n");
	}

	return 0;
}
