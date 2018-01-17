#include <iostream>
#include <stack>

using namespace std;

int calcula_diamantes(stack<char>& d, string s) { 
	int qnt_diamantes = 0;

	for(int i = 0; i < s.length(); i++) { 
		if(s[i] == '<') {
			d.push(s[i]);
		}
		else if(s[i] == '>') {
			if(!d.empty()) {
				d.pop();
				qnt_diamantes++;
			}
		}
	}

	return qnt_diamantes;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		string s; cin >> s;
		stack<char> d;

		cout << calcula_diamantes(d, s) << endl;
	}
	
	return 0;
}
