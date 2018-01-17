#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int converte_letra(char c) {
	switch(tolower(c)) {
		case 'a': return 10;
		case 'b': return 11;
		case 'c': return 12;
		case 'd': return 13;
		case 'e': return 14;
		case 'f': return 15;
		default: break;	
	}

	return -1;
}

long long hextoint(string s) {
	long long inteiro = 0;
	long long k = s.length()-1;
	long long x;

	for(long long i = s.length()-1; i >= 0; i--){
		if(isalpha(s[i])) x = converte_letra(s[i]);
		else x = s[i] - '0';
		
		inteiro += (pow(16.0, (double)(k - i)) * x);
	}

	return inteiro;
}


int main(void) {
	long long x;
	string buff; 
	while(cin >> buff, buff[0] != '-') {
		if(buff[1] != 'x') {
			x = stoll(buff);
			cout << "0x" << uppercase << hex << x << dec << uppercase << endl;

		} else {
			string aux;
			aux.assign(buff, 2, buff.length());
			
			cout << hextoint(aux) << endl;
		}
		
		
	}

	return 0;
}
