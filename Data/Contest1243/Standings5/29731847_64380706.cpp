#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
const double eps = 1e-6;
 
/////////////////////////////////////////////
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
////////////////////////////////


 
#define int long long
const int mod = 1e9 + 7;

void solve(){

    int n;
    cin>>n;
    
    string s , t;
    cin>>s>>t;

    if(s==t){

        cout<<"Yes\n";
        return ;
    }

    vector<int> id;

    for(int i = 0 ; i < n;  ++i){

        if(s[i]!=t[i])
            id.pb(i);
    }


    if(id.size()!=2){

        cout<<"No\n";
        return ;
    }

    //debug(id);
    if(s[id[0]]==s[id[1]] && t[id[0]]==t[id[1]]){

        cout<<"Yes\n";
        return ;
    }

    cout<<"No\n";
}
signed main(){
 
    fast;
    int t = 1;
    cin>>t;
    while(t--)
        solve();
}