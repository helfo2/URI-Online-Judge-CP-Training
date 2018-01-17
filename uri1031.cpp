#include <iostream>
#include <vector>

using namespace std;

bool testa(vector<int> v, int m) {
	int p = 0;
	while(v.size() > 1) {
		int x = *(v.begin()+p);
		v.erase(v.begin()+p);
		p = (p-1+m)%v.size();
	}

	return v[0]==13;
}

int main(void) {
	int n;

	while(cin >> n, n!=0) {
		vector<int> v(n); 
		for(int i = 0; i < n; i++) v[i] = i+1;

		int m = 1;

		while(!testa(v, m)) m++;

		cout << m << endl;
	}

	return 0;
}
