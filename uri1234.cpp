#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int i;
string s;
bool maiuscula;

void pula_espacos() {
	while(s[i] == ' ') { i++; } i--;
}

int main(void) { 
	while(getline(cin, s)) {
		maiuscula = false;
		i = 0;

		while(i < s.size()) {
			if(s[i] == ' ') pula_espacos();
			else { 
				if(!maiuscula) {
					s[i] = toupper(s[i]);
					maiuscula = true;
				} else {
					s[i] = tolower(s[i]);
					maiuscula = false;
				}
			}

			i++;
		}
		
		cout << s << endl;
		s.clear();
	}

	return 0;
}
