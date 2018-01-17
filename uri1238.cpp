#include <iostream>
#include <cstring>

using namespace std;

void combina(char *s1, char *s2, char* combinacao) {
	int tam1 = strlen(s1), tam2 = strlen(s2);
		
	int i = 0, j = 0, k = 0;
	while(j < tam1 && k < tam2) {
		combinacao[i] = s1[j++];
		combinacao[i+1] = s2[k++];

		i+=2;
	}

	if(tam1 > tam2) {
		while(j < tam1)
			combinacao[i++] = s1[j++];
	} else if(tam2 > tam1) {
		while(k < tam2)
			combinacao[i++] = s2[k++];
	}
	
	combinacao[i] = '\0';
	
	cout << combinacao << endl;
}

int main(void) {
	int n; cin >> n;

	while(n--) {
		char *s1 = (char*)malloc(51 * sizeof(char)), 
			 *s2 = (char*)malloc(51 * sizeof(char)), 
			 *combinacao = (char*)malloc(102 * sizeof(char));

		cin >> s1 >> s2;
		
		combina(s1, s2, combinacao);
		
		free(s1); free(s2); free(combinacao);
	}

	
	return 0;
}
