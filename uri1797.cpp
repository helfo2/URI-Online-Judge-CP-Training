#include <iostream>
#include <cmath>
#include <vector>
// #include <utility>

using namespace std;

float dist(int x0, int y0, int x1, int y1) {
	return sqrt((x1-x0)*(x1-x0) + (y1-y0)*(y1-y0));
}

int main(void) { 
	int n, aah; cin >> n >> aah;

	vector<pair<int, pair<int, int> > > predios(n);

	for(int i = 0; i < n; i++) {
		int x, y, l; cin >> x >> y >> l;
		predios[i] = make_pair(l, make_pair(x, y));
	}

	bool pode = true;

	for(int i = 0; i < n; i+=2) {
		float x0 = predios[i].second.first, y0 = predios[i].second.second + predios[i].first/2.0,
			x1 = predios[i+1].second.first, y1 = predios[i+1].second.second;
		


		if(dist(x0, y0, x1, y1) > (float)aah) {
			pode = false;
			break;
		}
	}

	cout << (pode ? "YEAH" : "OUCH") << endl;

	return 0;
}
