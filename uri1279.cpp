#include <iostream>
#include <string>

using namespace std;

bool div3(string a) {
	unsigned long long s = 0;
	for(int i = 0; i < a.length(); i++)
		s += (a[i]-'0');

	return (s % 3 == 0);
}

bool div5(string a) {
	return (a[a.length()-1] == '0' || a[a.length()-1] == '5');
}

bool div11(string a) {
	unsigned long long par = 0, impar = 0;

	for(int i = 0; i < a.length(); i+=2)
		par += a[i] - '0';

	for(int i = 1; i < a.length(); i+=2)
		impar += a[i] - '0';	

	long long dif = par-impar;
	
	return (dif % 11 == 0);
}

bool div4(string a) {
	string t = a.substr(a.length()-2);
	
	int ano = stoi(t);

	return ano % 4 == 0;
}

bool div100(string a) {
	string t = a.substr(a.length()-2);

	int ano = stoi(t);

	return ano == 0;
}

bool div400(string a) {
	string t = a.substr(a.length()-2),
		   t2 = a.substr(a.length()-4, 2);
	
	int a1 = stoi(t), a2 = stoi(t2);
	
	return (a2 % 4 == 0 && a1 == 0);
}

bool bissexto(string ano) {
	return div4(ano) && (!div100(ano) || div400(ano));
}

bool huluculu(string ano) {
	return div3(ano) && div5(ano);
}

bool bulukulu(string ano) {
	return bissexto(ano) && div5(ano) && div11(ano);
}

int main(void) {
	string ano;

	bool f = true;
	while(cin >> ano) {
		bool bi, h, b;
		
		if(!f) cout << endl;

		bi = bissexto(ano);
		h = huluculu(ano);
		b = bulukulu(ano);

		// cout << "bi = " << bi << endl;
		// cout << "h = " << h << endl;
		// cout << "b = " << b << endl;

		if(!bi && !h && !b) cout << "This is an ordinary year.\n";
		else {
			if(bi) cout << "This is leap year.\n"; 
			if(h) cout << "This is huluculu festival year.\n";
			if(b) cout << "This is bulukulu festival year.\n";
		}

		f = false;
	}

	return 0;
}
