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
	float n1, n2, n3, n4;
	scanf("%f%f%f%f", &n1,&n2,&n3,&n4);

	float media = ((2.0*n1) + (3.0*n2) + (4.0*n3) + n4) / 10.0;
	printf("Media: %.1f\n", media);

	if(media >= 7.0) printf("Aluno aprovado.\n");
	else if(media >= 5.0 && media <= 6.9) {
		float nota_exame;
		scanf("%f", &nota_exame);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n", nota_exame);

		media += nota_exame; media /= 2.0;

		if(media >= 5.0) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");

		printf("Media final: %.1f\n", media);
	} else printf("Aluno reprovado.\n");

	return 0;
}
