#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void) {
	int n;

	while(cin >> n, n != 0) { 
		int t;
		while(cin >> t, t != 0) {
			vector<int> v(n);

			v[0] = t;
			for(int i = 1; i < n; i++)
				cin >> v[i];

			stack<int> trem;

			int a = 0;
			for(int i = 1; i <= n; i++) {
				trem.push(i);

				while(!trem.empty() && v[a] == trem.top()) {
					a++;
					trem.pop();
				}
			}

			cout << (trem.empty() ? "Yes" : "No") << endl;
		}

		cout << endl;
	}

	return 0;
}
