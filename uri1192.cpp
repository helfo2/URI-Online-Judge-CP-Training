#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n; cin >> n;

	while(n--) { 
		string s; cin >> s;

		int n1 = s[0]-'0', n2 = s[2]-'0';
		
		if(n1 == n2)
			cout << n1 * n2 << endl;
		else if(isupper(s[1])) 
			cout << n2 - n1 << endl;
		else if(islower(s[1]))
			cout << n2 + n1 << endl;
	}
	
	
	return 0;
}
