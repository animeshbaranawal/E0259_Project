#include<bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define pb push_back
#define ms(a, x) memset(a, x, sizeof(a))

#define endl '\n'
using namespace std;

const int INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> pii;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(__gcd(a,b)==1) cout<<"Finite\n";
		else cout<<"Infinite\n";
	}
    return 0;
}
