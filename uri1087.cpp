#include <iostream>

using namespace std;

int x1, y1, x2, y2; 

int mov() {
	if(x1 == x2 && y1 == y2) {
		return 0;
	}
	else if(x1 == x2 || y1 == y2 || (abs(x1 - x2) == abs(y1 - y2))) {
		return 1;
	}
	else if(abs(x1 - x2) != abs(y1 - y2)) {
		return 2;
	}

	return -1;
}

int main(void) {
	

	while(cin >> x1 >> y1 >> x2 >> y2, x1 != 0) {
		cout << mov() << endl;
	}
	

	return 0;
}
