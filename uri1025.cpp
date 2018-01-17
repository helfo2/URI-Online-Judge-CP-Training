#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int linear(vector<int>& v, int key) {
	for(int i = 0; i < v.size(); i++) {
		if(key == v[i]) {
			return i;
		}
	}

	return -1;
}

int main(void) {
	int n, q, k = 1;
	
	while(scanf("%d%d",&n,&q) && n){
		vector<int> caso;

		int temp;
		while(n--) {
			scanf("%d",&temp);
			caso.push_back(temp);
		}

		sort(caso.begin(), caso.end());

		printf("CASE# %d:\n", k); k++;
		while(q--) {
			int key; scanf("%d", &key);
			
			int found = linear(caso, key);
			if(found == -1) {
				printf("%d not found\n", key);
			} else {
				printf("%d found at %d\n", key, found+1);
			}	
		}
	}

	return 0;
}
