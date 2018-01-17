#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void busca(vector<pair<char, int> >& v, char c) {
	for(auto it = v.begin(); it != v.end(); it++) {
		if(it->first == c) {
			it->second++;
		}
	}
}

bool comp(const pair<char, int> a, const pair<char, int> b) {
	if(a.second == b.second)
		return a.first > b.first;
	else return a.second < b.second;
}

int main(void) {
	string s;
	getline(cin, s);

	do {
		set<char> visto;
		vector<pair<char, int> > freq;

		for(int i = 0; i < s.length(); i++) {
			if(visto.find(s[i]) == visto.end()) {
				visto.insert(s[i]);
				freq.push_back(make_pair(s[i], 1));
			} else {
				busca(freq, s[i]);
			}
		}

		sort(freq.begin(), freq.end(), comp);

		for(int i = 0; i < freq.size(); i++) {
			cout << (int)freq[i].first << " " << freq[i].second << endl;
		}

		if(!getline(cin, s)) break;
		else cout << endl; 
	} while(1);

	return 0;
}
