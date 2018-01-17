#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n; cin >> n; cin.ignore();

	while(n--) {
		string dieta, cafe, almoco, jantar;

		getline(cin, dieta); 
		getline(cin, cafe); 
		getline(cin, almoco); 

		// cout << "dieta = "<< dieta << endl;
		// cout << "cafe = "<< cafe << endl;
		// cout << "almoco = "<< almoco << endl;

		bool cheater = false;

		set<char> comido;
		vector<bool> visto(dieta.size());

		for(int i = 0; i < cafe.size(); i++) {
			if(dieta.find(cafe[i]) == -1 || comido.count(cafe[i]))
				cheater = true;
			else 
				visto[dieta.find(cafe[i])] = true;

			comido.insert(cafe[i]);
		}

		for(int i = 0; i < almoco.size(); i++) {
			if(dieta.find(almoco[i]) == -1 || comido.count(almoco[i]))
				cheater = true;
			else 
				visto[dieta.find(almoco[i])] = true;
			
			comido.insert(almoco[i]);
		}

		if(cheater) cout << "CHEATER\n";
		else {
			vector<char> jantar;

			for(int i = 0; i < dieta.size(); i++)
				if(!visto[i]) jantar.push_back(dieta[i]);

			sort(jantar.begin(), jantar.end());

			for(auto i : jantar)
				cout << i;
			cout << endl;
		}
	}

	return 0;
}
