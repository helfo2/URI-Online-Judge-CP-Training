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

int main(void) { _
	double ev1, ev2, at, d;
	double p1, p2, prob;

	while(cin>>ev1>>ev2>>at>>d, ev1 != 0 && ev2 != 0 && at != 0 && d != 0) {
		ev1 /= d; ev1 = ceil(ev1);
		ev2 /= d; ev2 = ceil(ev2);
		
		if(at == 3) {
			prob = ev1 / (ev1 + ev2);
		} else {
			p1 = at/6.0;
			p2 = (1 - p1) / p1; 

			prob = (1.0 - pow(p2, ev1)) / (1.0 - pow(p2, ev1 + ev2));
		}

		cout << fixed << setprecision(1) << prob * 100.0 << endl;
	}

	return 0;
}
