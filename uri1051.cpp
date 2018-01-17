#include <iostream>
#include <iomanip>

using namespace std;

double calcula(double n) {
	double ir = 0.0, t;

	if(n > 4500) {
		t = n - 4500;
		ir += t * 0.28; n -= t;

		t = n - 3000;
		ir += t * 0.18; n -= t;

		t = n - 2000;
		ir += t * 0.08; n -= t;
	} 
	else if(n > 3000) {
		t = n - 3000;
		ir += t * 0.18; n -= t;

		t = n - 2000;
		ir += t * 0.08; n -= t;
	}
	else if(n > 2000) {
		t = n - 2000;
		ir += t * 0.08; n -= t;
	}
	else ir = -1;

	return ir;
}

int main(void) {
	double n;
	
	cin >> n;

	double ir = calcula(n);

	if(ir == -1) cout << "Isento" << endl;
	else cout << "R$ " << fixed << setprecision(2) << ir << endl;

	return 0;
}
