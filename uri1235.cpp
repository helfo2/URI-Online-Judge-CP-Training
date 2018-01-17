#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n; cin >> n; cin.ignore();
	string s;

	while(n--) {
		getline(cin, s);

		for(int i = (s.length()/2)-1; i >= 0; i--)
			cout << s[i];
		for(int i = s.length()-1; i > s.length()/2; i--)
			cout << s[i];

		cout << s[s.length()/2] << endl;
	}

	return 0;
}
