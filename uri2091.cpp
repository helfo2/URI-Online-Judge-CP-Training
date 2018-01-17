#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int i;
	long long n, a, sozinho, numeros;

	scanf("%lld", &n);
	while(n != 0) {
		for(i = 0; i < n; i++) {
			scanf("%lld", &numeros);
			sozinho ^= numeros;
		}
		
		printf("%lld\n", sozinho);
		scanf("%lld", &n);
		sozinho = 0;
	}


	return 0;
}