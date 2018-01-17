#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

bool close(char a, char b) { 
	return a == '(' && b == ')';
}

bool check(vector<char>& exp, stack<char>& p) {
	for(int i = 0; i < exp.size(); i++) {
		if(exp[i] == '(') p.push(exp[i]);
		else {
			if(p.empty()) return false;
			else if(!close(p.top(), exp[i])) return false;

			p.pop();
		}
	}

	return p.empty();
}

int main(void) {
	string s;

	while(cin >> s) { 
		stack<char> p;
		vector<char> exp;

		for(int i = 0; i < s.length(); i++)
			if(s[i] == '(' || s[i] == ')') exp.push_back(s[i]);

		if(check(exp, p)) cout << "correct" << endl;
		else cout << "incorrect" << endl;
	}
	
	return 0;
} 
