#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int main(void) {
	int testes, casas; scanf("%d", &testes);
	uint64_t resposta;

	while(testes--) {
		scanf("%d", &casas);

		resposta = pow(2, casas) / 12;

		cout << resposta / 1000 << " kg\n";
	}

	return 0;
}
