#include <iostream>
#include <string>

using namespace std;

int atual;
string pre, in;

void f(int b, int e) {
	if(b <= e) {
		atual++;
		int i = in.find(pre[atual]);
		f(b, i-1);
		f(i+1, e);
		cout << in[i];
	}
}

int main(void) {
	while(cin >> pre >> in) {
		atual = -1;

		f(0, pre.length()-1);
		cout << endl;
	}

	return 0;
}
