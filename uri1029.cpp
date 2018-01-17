#include <iostream>

using namespace std;

int fib(int n, int *calls) {
	*(calls) = *(calls) + 1;
	if(n == 0) { return 0; }
	else if(n == 1) { return 1; }
	else { return fib(n - 1, calls) + fib(n - 2, calls); }
}

int main(void) {
	int n; scanf("%d", &n);

	while(n--) {
		int x; scanf("%d", &x);

		int calls = 0;
		int f = fib(x, &calls);
		printf("fib(%d) = %d calls = %d\n", x, calls-1, f);
	}

	return 0;
}
