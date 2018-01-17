#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s1, s2, s3;

	cin >> s1 >> s2 >> s3;
	
	if(s1.compare("vertebrado") == 0) {
		if(s2.compare("ave") == 0) {
			if(s3.compare("carnivoro") == 0) {
				cout << "aguia" << endl;
			}
			else if(s3.compare("onivoro") == 0) {
				cout << "pomba" << endl;
			}
		}
		else if(s2.compare("mamifero") == 0) {
			if(s3.compare("onivoro") == 0) {
				cout << "homem" << endl;
			}
			else if(s3.compare("herbivoro") == 0) {
				cout << "vaca" << endl;
			}
		}
	} 
	else if(s1.compare("invertebrado") == 0) {
		if(s2.compare("inseto") == 0) {
			if(s3.compare("hematofago") == 0) {
				cout << "pulga" << endl;
			}
			else if(s3.compare("herbivoro") == 0) {
				cout << "lagarta" << endl;
			}
		}
		else if(s2.compare("anelideo") == 0) {
			if(s3.compare("hematofago") == 0) {
				cout << "sanguessuga" << endl;
			}
			else if(s3.compare("onivoro") == 0) {
				cout << "minhoca" << endl;
			}
		}
	}

	return 0;
}