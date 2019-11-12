#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int, int> pii;
typedef tuple<int, int, int> tiii;
typedef tuple<int, int, int, int> tiiii;
typedef set <int> si;
typedef map <int, int> mii;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <vector <int>> vvi;  
#define F(i, a, b) for(int i = a; i <= (int)b; i++)
#define f(i, a, b) for(int i = a; i >= (int)b; i--)
#define F2(i, a, b) for(int i = a; i <= (int)b; i+=2)
#define f2(i, a, b) for(int i = a; i >= (int)b; i-=2)
#define wh(n) int iteration = n; while(iteration--) 
#define For(t, it) for(auto it = (t).begin(); it != (t).end(); ++it)
#define IN insert
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define RS resize
#define GRAF(n) vvi gr; gr.resize(n+1); vector <bool> was; was.resize(n+1, 0);

int gcd(int a, int b){
	return b ? gcd(b, a % b) : a;
}

int solve(){
	int n, a;
	cin >> n;
	vi pm(n+1, 0);
	int mx = 0;
	F(i, 0, n-1){
		cin >> a;
		pm[a]++;
	}
	f(i, n, 1){
		mx = max(mx, min(i, pm[i]));
		pm[i-1] += pm[i];
	}
	return mx;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif
	int k;
	cin >> k;
	wh(k){
		cout << solve() << '\n';
	}
	return 0;
}