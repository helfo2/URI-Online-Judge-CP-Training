#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
	float n;

	while(cin >> n) {
		float h, c, l; cin >> h >> c >> l;

		cout << fixed << setprecision(4) 
		 << (n * (sqrt(c*c + h*h)) * l)/10000.0 << endl; 
	}
	
	return 0;
}
