#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

bool percorre(int **m, int i, int j) {
	if(i < 0 || j < 0 || i > 4 || j > 4) return false;
	if(i == 4 && j == 4) return true;

	if(m[i][j] == 1) return false;
	m[i][j] = -1;

	if(i - 1 >= 0 && m[i - 1][j] != -1 && percorre(m, i - 1, j) == true) return true;
	if(j + 1 <= 4 && m[i][j + 1] != -1 && percorre(m, i, j + 1) == true) return true;
	if(i + 1 <= 4 && m[i + 1][j] != -1 && percorre(m, i + 1, j) == true) return true;
	if(j - 1 >= 0 && m[i][j - 1] != -1 && percorre(m, i, j - 1) == true) return true;
	m[i][j] = 0;

	return false;
}

int main(void) {
	int t, i, j, **lab = (int**)malloc(5 * sizeof(int*));

	for(int k = 0; k < 5; k++) lab[k] = (int*)malloc(5 * sizeof(int));

	scanf("%d", &t);

	while(t-- > 0) {
		
		cin.ignore();

		for(i = 0; i < 5; i++) {
			for(j = 0; j < 5; j++) {
				scanf("%d", &lab[i][j]);
			}
		}

		if(percorre(lab, 0, 0)) {
			printf("COPS\n");
		} else printf("ROBBERS\n");
	}

	return 0;
}