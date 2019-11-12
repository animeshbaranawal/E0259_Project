#include <bits/stdc++.h>
using namespace std;
template<class T> ostream& operator<<(ostream &os, vector<T> V){os << "[ "; for(auto v : V) os << v << " "; return os << "]";}
template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> P){return os << "(" << P.first << "," << P.second << ")";}
#ifndef ONLINE_JUDGE
#define TRACE
#endif

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
	template <typename Arg1>
	void __f(const char* name, Arg1&& arg1){ cout << name << " : " << arg1 << endl; }
	template <typename Arg1, typename... Args>
	void __f(const char* names, Arg1&& arg1, Args&&... args){const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);}
#else
#define trace(...) 1
#endif
#define pb push_back
#define F first
#define S second
typedef long double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
const int N = 1e5+5;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<setprecision(25);
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	string s,u,a,b;
    	cin>>s>>u;
    	int cnt= 0;
    	for(int i=0;i<n;i++){
    		if(s[i] != u[i]){
    			cnt++;
    			a+=s[i];
    			b+=u[i];
    			if(cnt>2) break;
    		}
    	}
    	if(cnt == 2){
			if(a[0] == a[1] && b[0] == b[1]) cout<<"Yes\n";
			else cout<<"No\n";
    	}
    	else cout<<"No\n";
    }
}