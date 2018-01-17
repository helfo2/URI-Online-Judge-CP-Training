#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int b, n;
	vector<int> reservas;

	while(cin >> b >> n, (b + n)) { 
		reservas.resize(n);
		
		for(int i = 0; i < b; i++)
			cin >> reservas[i];

		while(n--) {
			int d, c, v; cin >> d >> c >> v;
			
			reservas[c-1] += v;
			reservas[d-1] -= v;
		}

		bool liquida = true;
		for(int i = 0; i < b; i++)
			if(reservas[i] < 0) liquida = false;

		cout << (liquida ? "S" : "N") << endl;

		reservas.clear();
	}
	
	return 0;
}
