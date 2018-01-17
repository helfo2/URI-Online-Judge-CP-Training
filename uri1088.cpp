#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool jogada(vector<int>& v) {
	
	int i = 0, j = i+1;

	while(j <= v.size()-1) { 
		// cout << v[i] << " " << v[j] << endl;
		if(v[i] > v[j]) return true;
		i++; j++;
	}

	return false;
}

void p(vector<int>& v) {
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

string solve(vector<int>& v) {
	int jog = 0;

	int i = 0, j = i+1;
	while(1) {
		if(j > v.size()-1) {
			i = 0; j = i+1;
		}

		if(v[i] > v[j]) {
			swap(v[i], v[j]);

			
			
			jog++;

			if(!jogada(v)) break;
		}

		i++; j++;

		// p(v);
	}

	return (jog % 2 == 0 ? "Carlos" : "Marcelo"); 
}

int main(void) {
	int n;
	
	while(cin >> n, n!=0) {
		vector<int> v(n);

		for(auto& i : v) cin >> i;

		cout << solve(v) << endl;
	}

	return 0;
}
