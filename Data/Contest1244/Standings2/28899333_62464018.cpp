#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, 
tree_order_statistics_node_update> ordered_set;
//s.find_by_order()
//s.order_of_key()
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef vector<int> VI;

#define SZ(a) (int)a.size()
#define FOR(i, a, b) for(int i = (a);i < (b);++i)
#define RFOR(i, b, a) for(int i = (b)-1;i >= (a);--i)
#define PB push_back
#define MP make_pair
#define FILL(a, b) memset(a, b, sizeof(a))
#define ALL(a) a.begin(), a.end()
#define f first
#define s second

const int INF = 1000 * 1000 * 1000;
const LL LINF = 1ll * INF * INF;
const long double PI = acos(-1.0);
const int MAXN = 1e5 + 7;
const int MOD = 1000 * 1000 * 1000 + 7;

void solve()
{
	int a, b, c, d, k;
	cin >> a >> b >> c >> d >> k;
	FOR(i, 0, k + 1)
	{
		int x = i;
		int y = k - i;
		if (x * c >= a && y * d >= b)
		{
			cout << x << " " << y << "\n";
			return;
		}
	}
	cout << "-1\n";
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();	
	}
	
	return 0;
}


















