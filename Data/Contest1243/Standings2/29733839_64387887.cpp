#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
 
#define INF 1000000021
#define MOD 1000000007
#define pb push_back
#define sqr(a) (a)*(a)
#define M(a, b) make_pair(a,b)
#define T(a, b, c) make_pair(a, make_pair(b, c))
#define F first
#define S second
#define all(x) (x.begin(), x.end())
#define deb(x) cerr << #x << " = " << x << '\n'
#define N 222222
 
using namespace std;
//using namespace __gnu_pbds;
 
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
const ld pi = 2 * acos(0.0);
template<class T> bool umin(T& a, T b){if(a>b){a=b;return 1;}return 0;}
template<class T> bool umax(T& a, T b){if(a<b){a=b;return 1;}return 0;}
template<class T, class TT> bool pal(T a, TT n){int k=0;for(int i=0;i<=n/2;i++){if(a[i]!=a[n-i-1]){k=1;break;}}return k?0:1;}
 
//int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
 
int main()
{
	ll n;
	cin >> n;
	ll k = 0;
	for(ll i = 2; i * i <= n; i ++)
	{
		if(n % i == 0)
		{
			k = i;
			break;
		}
	}	 
	if(!k)
		return cout << n, 0;
		ll p = 1;
	while(p < n)
		p *= k;
	if(p == n)
		return cout << k, 0;
	cout << 1;
 
 
 
 
	
 
 
 
 
 
	getchar();
	getchar();
	return 0;
	//ios::sync_with_stdio(false);
	//cin.tie(0);
}
