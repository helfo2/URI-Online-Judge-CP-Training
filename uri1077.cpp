#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool op(char c) {
	if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') return true;
	return false;
}

int prioridade(char c) {
	switch(c) {
		case '+':
		case '-': return 1;
		case '*':
		case '/': return 2;
		case '^': return 3;
		default: return 0;
	}
}

void monta_pos(string& s, vector<char>& posfixa, stack<char>& p) {
	for(int i = 0; i < s.size(); i++) {
		if(op(s[i])) {
			while(!p.empty() && prioridade(p.top()) >= prioridade(s[i])) {
				posfixa.push_back(p.top());
				p.pop();
			}

			p.push(s[i]);
		} 
		else if(s[i] == '(') {
			p.push(s[i]);
		}
		else if(s[i] == ')') {
			while(p.top() != '(') {
				posfixa.push_back(p.top());
				p.pop();
			}

			p.pop();
		}
		else {
			posfixa.push_back(s[i]);
		}
	}

	while(!p.empty()) {
		posfixa.push_back(p.top());
		p.pop();
	}
}

void print_pos(vector<char> posfixa) {
	for(int i = 0; i < posfixa.size(); i++)
		cout << posfixa[i];
	cout << endl;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		stack<char> p;
		vector<char> posfixa;

		string s; cin >> s;

		monta_pos(s, posfixa, p);

		print_pos(posfixa);
	}

	return 0;
}
