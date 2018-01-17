#include <iostream>

using namespace std;

int h1, m1, h2, m2; 

int minutos() {
	if(h1 <= h2 && m1 <= m2)
		return (h2 - h1) * 60 + m2 - m1;
	else if(h1 < h2 && m1 > m2)
		return (h2 - h1 - 1) * 60 + 60 - m1 + m2;
	else if(h1 > h2 && m1 <= m2)
		return (24 - h1 + h2) * 60 + m2 - m1;
	else if(h1 >= h2 && m1 > m2)
		return (24 - h1 + h2 - 1) * 60 + 60 - m1 + m2;

	return -1;
}

int main(void) {

	while(cin >> h1 >> m1 >> h2 >> m2, (h1 + m1 + h2 + m2)) {
		int m = minutos();
		if(m == 0) cout << 24 * 60 << endl;
		else cout << m << endl;
	}

	return 0;
}
