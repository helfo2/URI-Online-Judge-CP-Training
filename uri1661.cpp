#include <iostream>

using namespace std;

int main(void) {
	int n;
	int cidade[100005];

	while(cin >> n, n!=0) { 
		for(int i = 0; i < n; i++)
			cin >> cidade[i];

		long long trabalho = 0;
		for(int i = 1; i < n; i++) {
			trabalho += abs(cidade[i-1]);
			cidade[i] += cidade[i-1];
		}

		cout << trabalho << endl;
	}

	return 0;
}
