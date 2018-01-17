#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int busca(vector<int> v, int n) {
	for(int i = 0; i < v.size(); i++)
		if(v[i] == n) return i;
	return -1;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		int l; cin >> l;

		vector<int> trem(l);
		for(int i = 0; i < l; i++) cin >> trem[i];

		int i = 0, s = 0;

		while(i < l) {
			while(trem[i] != i+1) {
				int t = busca(trem, i+1);
				swap(trem[t-1], trem[t]);
				s++;
			}

			i++;
		}

		cout << "Optimal train swapping takes " << s << " swaps.\n";
		
	}

	return 0;
}
