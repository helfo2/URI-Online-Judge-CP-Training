#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	int n;
	string a, b;

	while(cin >> n, n!=0) {
		cin.ignore();

		char c = 'x';
		int r = 0; 
		while(r < n) {
			cin >> c; 
			if(c != ' ') a.insert(a.end(), c);
			r++;
		}

		r = 0;
		while(r < n) {
			cin >> c;
			if(c != ' ') b.insert(b.end(), c);
			r++;
		}
		
		int i = 0, j = 0;

		stack<char> p;
		while(1) {
			if(!p.empty() && j < b.length() && p.top() == b[j]) {
				p.pop();
				cout << "R";

				j++;
			} else if(i < a.length()) { 
				p.push(a[i]);
				cout << "I";
				
				i++;
			} else break;
		}

		if(!p.empty()) cout << " Impossible\n";
		else cout << endl;

		while(!p.empty()) p.pop();

		a.clear(); b.clear();
	}

	return 0;
}
