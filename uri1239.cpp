#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;

	while(getline(cin, s)) {
		s.insert(s.end(), '\n');
		string html;
		bool abre_i, abre_b;

		abre_i = abre_b = true;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '_') {
				if(abre_i) {
					html.append("<i>");
					abre_i = false;
				}
				else { 
					html.append("</i>");
					abre_i = true;
				}
			}
			else if(s[i] == '*') {
				if(abre_b) {
					html.append("<b>");
					abre_b = false;
				}
				else { 
					html.append("</b>");
					abre_b = true;
				}
			} else html.insert(html.end(), s[i]);
		}

		cout << html;

		html.clear();
	}

	return 0;
}
