#include <bits/stdc++.h>
  
using namespace std;
  
template<class T> void ckmin(T &a, T b) { a = min(a, b); }
template<class T> void ckmax(T &a, T b) { a = max(a, b); }
  
#define pb push_back
#define mp make_pair
#define cotu cout
#define itn int
#define Red ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for(int i = 0; i < n; ++i)
#define repr(i,n) for(int i = n - 1; i >= 0; --i)
#define Rep(i, a, n) for(int i = (a); i <=(n); ++i)
#define repst(i, n) for(auto it = n.begin(); it != n.end(); ++it)
#define Repr(i, a, n) for(int i = (n); i >= (a); --i)
  
#define ordered_set tree<int , null_type,less<int >, rb_tree_tag,tree_order_statistics_node_update> 
  
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
  
const int inf = int(1e9);
const int mod = inf + 7;
const int N = 1e7 + 555;
const double PI = acos(-1.0);
int cnt[26];
void solve()
{
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	for(int i = 0; i < 26; ++i) cnt[i] = 0;
	vector<int> v;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] != t[i]){
			v.pb(i);
		}
	}
	if(v.size() == 2){
		swap(s[v[0]], t[v[1]]);
		if(s == t){
			cotu << "Yes" << endl;
		}
		else cout << "No" << endl;
	}else if(v.size() == 0){
		cout << "Yes" << endl; 
	}
	else{
		cout << "No" << endl;
	}
}
 
int main()
{
    Red;
    int T;
    cin >> T;
    while(T--)
    solve();
    return 0;
}