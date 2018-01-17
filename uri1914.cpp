#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int qt;
	long valor1, valor2;
	string jog1, jog2, escolha1, escolha2;

	scanf("%d", &qt);

	while(qt-- > 0) {
		cin >> jog1;
		cin >> escolha1;
		cin >> jog2;
		cin >> escolha2;

		cin >> valor1;
		cin >> valor2;

		if((valor1 + valor2) % 2 == 0) {
			if(escolha1 == "PAR") printf("%s\n", jog1.c_str());
			else printf("%s\n", jog2.c_str());
		}
		else {
			if(escolha1 == "IMPAR") printf("%s\n", jog1.c_str());
			else printf("%s\n", jog2.c_str());
		}
	}

	return 0;
}