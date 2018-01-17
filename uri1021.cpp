#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
#define sz(a) (int)((a).size()) 
#define pb push_back 
#define mp make_pair
#define p push
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sc(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d%d", &a, &b)
#define sc3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define scs(a) scanf("%s", a)
#define pri(x) printf("%d\n", x)
#define prie(x) printf("%d ", x)
#define buff ios::sync_with_stdio(false)
#define db(x) cerr << #x << " == " << x << endl
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ii> vii;
typedef vector< vii> vvii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ld pi = acos(-1);

int main(void) {
	double valor, temp; scanf("%lf", &valor);
	double t;
	temp = modf(valor, &t);
	int inteiro = t, decimal = (valor-t)*100;

	printf("NOTAS:\n");

	printf("%d nota(s) de R$ 100.00\n", inteiro/100);

	inteiro %= 100;

	printf("%d nota(s) de R$ 50.00\n", inteiro/50);

	inteiro %= 50;

	printf("%d nota(s) de R$ 20.00\n", inteiro/20);

	inteiro %= 20;

	printf("%d nota(s) de R$ 10.00\n", inteiro/10);

	inteiro %= 10;

	printf("%d nota(s) de R$ 5.00\n", inteiro/5);

	inteiro %= 5;

	printf("%d nota(s) de R$ 2.00\n", inteiro/2);

	inteiro %= 2;
	
	

	printf("MOEDAS:\n");

	printf("%d moeda(s) de R$ 1.00\n", inteiro);

	printf("%d moeda(s) de R$ 0.50\n", decimal/50);

	decimal %= 50;

	printf("%d moeda(s) de R$ 0.25\n", decimal/25);

	decimal %= 25;

	printf("%d moeda(s) de R$ 0.10\n", decimal/10);

	decimal %= 10;

	printf("%d moeda(s) de R$ 0.05\n", decimal/5);

	decimal %= 5;

	printf("%d moeda(s) de R$ 0.01\n", decimal);

	return 0;
}
