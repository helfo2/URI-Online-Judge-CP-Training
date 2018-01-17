#include <iostream>
#include <string>

using namespace std;

bool f(string a, string b) {
	int i = a.length(), j = b.length();
	if(j > i) return false;
	else {
		while(i > 0 && j > 0) {
			i--; j--;
			if(a[i] == b[j]) continue;
			else return false;
		}
	}
	
	return true;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		string a, b; cin >> a >> b;

		cout << (f(a, b) ? "encaixa" : "nao encaixa") << endl;
	}

	return 0;
}
