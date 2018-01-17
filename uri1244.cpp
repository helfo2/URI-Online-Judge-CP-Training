#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>

using namespace std;

bool ordena_tamanho(string a, string b) {
	if(a.size() > b.size()) return true;
	else return false;
}

int main(void) {
	int n, i;
	vector<string> all_frases;
	string temp;
	istringstream f;
	list<string> ordem;
	list<string>::iterator teste, it;

	scanf("%d", &n);
	all_frases.resize(n * 50);

	cin.ignore();

	for(i = 0; i < n; i++) {
		getline(cin, all_frases[i]);
		//cout << "all_frases: " << all_frases[i] << endl;

		f.str(all_frases[i]);

		while(getline(f, temp, ' ')){
			ordem.push_back(temp);
		}
			
		ordem.sort(ordena_tamanho);
		teste = ordem.end();
		teste--;
		for(it = ordem.begin(); it != teste; it++) {
			cout << *it << " ";
		}
		cout << *it << endl;

		f.clear();
		ordem.clear();
	}

	return 0;
}