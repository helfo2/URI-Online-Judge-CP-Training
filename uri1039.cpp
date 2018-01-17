#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int r1, x1, y1, r2, x2, y2;
	
	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
		float dist = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

		if(dist <= r1 - r2) cout << "RICO" << endl;
		else cout << "MORTO" << endl;
	}

	return 0;
}
