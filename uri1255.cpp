#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<pair<char, int> >::iterator busca(vector<pair<char, int> >& v, char c) {
	for(auto it = v.begin(); it != v.end(); it++)
		if(it->first == c) return it;
	return v.end();
}

void conta(vector<pair<char, int> >& v, char c) {
	auto it = busca(v, c);
	it->second++;
}

bool comp(const pair<char, int> a, const pair<char, int> b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(void) {
	int t; cin >> t; cin.ignore();

	while(t--) {
		set<char> visto;
		vector<pair<char, int> > freq;

		string s;
		getline(cin, s);

		for(int i = 0; i < s.length(); i++) {
			if(isalpha(s[i])) {
				s[i] = tolower(s[i]);

				if(visto.find(s[i]) == visto.end()) {
					visto.insert(s[i]);
					freq.push_back(make_pair(s[i], 1));
				} 
				else conta(freq, s[i]);
			}
		}

		sort(freq.begin(), freq.end(), comp);

		int f = freq.begin()->second;
		auto it = freq.begin();

		while(it->second == f && it != freq.end()) {
			cout << it->first;
			it++;
		}

		cout << endl;
	}

	return 0;
}
