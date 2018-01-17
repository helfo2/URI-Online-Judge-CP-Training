#include <iostream>
#include <string>
#include <list>
#include <sstream>
#include <algorithm>

using namespace std;

bool comp(string s1, string s2) {
	return s1.size() > s2.size();
}

int main(void) {
	int n; cin >> n; cin.ignore();

	while(n--) {
		string linha, t;
		list<string> resposta;

		getline(cin, linha);

		stringstream ss;
		ss << linha;

		while(ss >> t) {
			resposta.push_back(t);
		}

		resposta.sort(comp);

		auto it = resposta.begin();
		cout << *it; ++it;
		for(it = it; it != resposta.end(); it++)
			cout << " " << *it;

		cout << endl;
	}

	return 0;
}
