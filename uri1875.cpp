#include <iostream>
#include <algorithm>

using namespace std;

int golG, golR, golB;

bool comp(const int a, const int b) {
	return a > b;
}

void atualiza_placar(char a, char b) {
	if(a == 'G' && b == 'R')
		golG++;
	else if(a == 'R' && b == 'B') 
		golR++;
	else if(a == 'B' && b == 'G')
		golB++;
	else if(a == 'R' && b == 'G')
		golR+=2;
	else if(a == 'B' && b == 'R')
		golB+=2;
	else if(a == 'G' && b == 'B') 
		golG+=2;
}

string decide() {
	if(golG == golR && golR == golB) return "trempate";
	else {
		if(golG > golR && golG > golB)
			return "green";
		else if(golR > golG && golR > golB)
			return "red";
		else if(golB > golR && golB > golG)
			return "blue";
		
		int v[3] = {golB, golR, golG};
		sort(v, v+3, comp);

		if(v[0] == v[1]) return "empate";
	}

	return "erro";
}

int main(void) {
	int c; cin >> c;

	while(c--) {
		int p; cin >> p;

		golB = golR = golG = 0;
		while(p--) {
 			char a, b; cin >> a >> b;
 			atualiza_placar(a, b);
		}

		cout << decide() << endl;
	}

	return 0;
}
