#include <iostream>

using namespace std;

typedef struct retangulo {
	int x0, y0, x1, y1;
} retangulo;

int main(void) {
	retangulo a, b;

	while(cin >> a.x0 >> a.y0 >> a.x1 >> a.y1 >> b.x0 >> b.y0 >> b.x1 >> b.y1) {
		int area = abs(a.y0 - b.y1) * abs(a.x0 - b.x0);

		if(area > 10) cout << "grande\n";
	}
	
	return 0;
}
