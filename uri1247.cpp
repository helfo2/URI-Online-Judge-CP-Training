#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int d, vf, vg;

	while(cin >> d >> vf >> vg) {
		float tf = 12.0 / (float)vf,
			  dg = sqrt(d*d + 12.0*12.0);

		float tg = dg / (float)vg;

		if(tg <= tf) cout << "S\n";
		else cout << "N\n";
	}

	return 0;
}
