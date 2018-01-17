#include <iostream>
#include <vector>

using namespace std;

vector<int> cartas;

void print_cartas() {
	for(int i = 0; i < cartas.size(); i++)	{
		cout << cartas[i] << " ";
	}
	cout << endl;
}

int main(void) {
	int n;

	while(cin >> n, n != 0) {
		cartas.clear();

		for(int i = 1; i <= n; i++)
			cartas.push_back(i);

		cout << "Discarded cards: ";
		while(cartas.size() != 1) {
			if(cartas.size() != 2) cout << *cartas.begin() << ", ";
			else cout << *cartas.begin() << endl;

			cartas.erase(cartas.begin());
			int carta = *(cartas.begin());
			cartas.erase(cartas.begin());
			cartas.insert(cartas.end(), carta);
		}

		cout << "Remaining card: " << *cartas.begin() << endl;
	}

	return 0;
}
