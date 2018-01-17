#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <list>
using namespace std;
#define sz(a) int(a.size())
#define pb push_back
#define mp make_pair
#define p push
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sc(a) scanf("%d", &a)
#define sc2(a,b) scanf("%d%d", &a, &b)
#define sc3(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define scs(a) scanf("%s", a)
#define pri(a) printf("%d\n", a)
#define prie(a) printf("%d", a)
#define f(i, l) for(int i = 0; i < l; i++)
#define _ ios::sync_with_stdio(false);cin.tie(0);
typedef long long int ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ii > vii;
typedef vector< vii > vvii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ld pi = acos(-1);
const int MOD = 1e9 + 9;
const int maxv = 100500;

bool dois_lados_iguais(float a, float b, float c) {
	return ((a == b && b != c) || (a == c && c != b) || (b == c && c != a));
}

int main(void) {
	vector<float> t(3); scanf("%f%f%f",&t[0],&t[1],&t[2]);

	sort(t.rbegin(), t.rend());

	float a = t[0], b = t[1], c = t[2];

	if(a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
	} 
	else {
		if(pow(a, 2.0) == (pow(b, 2.0) + pow(c, 2.0))) {
			printf("TRIANGULO RETANGULO\n");
		}
		if(pow(a, 2.0) > (pow(b, 2.0) + pow(c, 2.0))) {
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(pow(a, 2.0) < (pow(b, 2.0) + pow(c, 2.0))) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(a == b && b == c) {
			printf("TRIANGULO EQUILATERO\n");
		}
		if(dois_lados_iguais(a, b, c)) {
			printf("TRIANGULO ISOSCELES\n");
		}
	}

	return 0;
}
