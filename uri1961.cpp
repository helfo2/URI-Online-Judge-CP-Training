#include <iostream>

using namespace std;

int main (void) {
	int p, n, cano, prox_cano, win_flag = 1;

	scanf("%d %d", &p, &n);

	scanf("%d", &cano); n--;

	while(n-- > 0) {
		scanf("%d", &prox_cano);

		if(prox_cano - cano > p || prox_cano < cano - p) {
			win_flag = 0;
			break;
		}

		cano = prox_cano;
	}

	win_flag ? printf("YOU WIN\n") : printf("GAME OVER\n");

	return 0;
}