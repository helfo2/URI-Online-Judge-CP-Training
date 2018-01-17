#include <iostream>

using namespace std;

int main(void) { ios::sync_with_stdio(false); cin.tie(NULL);
	int di, hi, mi, si;
	scanf("Dia %d\n%d : %d : %d\n", &di, &hi, &mi, &si);

	int df, hf, mf, sf;
	scanf("Dia %d\n%d : %d : %d\n", &df, &hf, &mf, &sf);

	int qi = si + mi*60 + hi*60*60 + di*24*60*60,
		qf = sf + mf*60 + hf*60*60 + df*24*60*60;

	int t = qf-qi;

	printf("%d dia(s)\n", t/(60*60*24)); t %= (60*60*24);
	printf("%d hora(s)\n", t/(60*60)); t %= (60*60);
	printf("%d minuto(s)\n", t/60); t %= 60;
	printf("%d segundo(s)\n", t);

	return 0;
}
