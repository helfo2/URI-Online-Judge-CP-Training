#include <iostream>
#include <stack>
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


vector<char> f(string s, stack<char>& p) {
	vector<char> pos;

	for(int i = 0; i < s.length(); i++) { 
		if(op(s[i])) {
			while(!p.empty() && prioridade(p.top()) >= prioridade(s[i])) {
				pos.push_back(p.top());
				p.pop();
			}

			p.push(s[i]);
		}
		else if(s[i] == '(') {
			p.push(s[i]);
		} 
		else if(s[i] == ')') {
			while(p.top() != '(') {
				pos.push_back(p.top());
				p.pop();
			}

			p.pop();
		}
		else pos.push_back(s[i]);
	}


	while(!p.empty()) {
		pos.push_back(p.top());
		p.pop();
	}

	return pos;
}

void print_pos(vector<char> pos) {
	for(int i = 0; i < pos.size(); i++)
		cout << pos[i];
	cout << endl;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		string exp; cin >> exp;
		
		stack<char> p;
		vector<char> pos = f(exp, p);

		print_pos(pos);
	}

	return 0;
}
