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
	int hi, mi, hf, mf; cin>>hi>>mi>>hf>>mf;

	int dh, dm;

	if(hf > hi && mf >= mi) {
		dh = hf - hi; dm = mf - mi;
	}
	else if(hf > hi && mf < mi) {
		dh = hf - hi - 1; dm = 60 - (mi - mf);
	}
	else if(hi >= hf && mf >= mi) {
		dh = 24 - hi + hf; dm = mf - mi;
	}
	else if(hi >= hf && mf < mi) {
		dh = 24 - hi + hf - 1; dm = 60 - (mi - mf);
	}

	cout << "O JOGO DUROU " << dh << " HORA(S) E " 
		 << dm << " MINUTO(S)" << endl;
	return 0;
}
