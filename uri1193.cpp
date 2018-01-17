#include <iostream>
#include <string>
#include <deque>

using namespace std;

string bs[] = {"dec", "hex", "bin"};
int bv[] = {10, 16, 2};

void p(long long n, int i) {
	deque<int> f;

	while(n > 0) {
		f.push_front(n%bv[i]);
		n /= bv[i];
	}

	for(auto &i : f) {
		if(i >= 10)
			cout << char('a' + i - 10);
		else 
			cout << i;
	}
}

void f() {
	string x, base; cin >> x >> base;
	long long n;

	for(int i = 0; i < 3; i++) {
		if(base == bs[i])
			n = stoll(x, 0, bv[i]);
	}

	for(int i = 0; i < 3; i++) {
		if(base != bs[i]) {
			p(n, i);
			cout << " " << bs[i] << endl;
		}
	}

	cout << endl;
}


int main(void) {
	int n; cin >> n; cin.ignore();

	for(int i = 1; i <= n; i++) {
		cout << "Case " << i << ":\n";
		f();
	}

	return 0;
}
