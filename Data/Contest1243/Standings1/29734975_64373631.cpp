#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> plll;
typedef pair<pll,pll> ppll;
typedef long double ld;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fst first
#define snd second
#define ins insert
#define pb push_back
template< typename T,typename V>ostream &operator<< (ostream &out,const pair<T,V> x){ out << "{" << x.fst << " : " << x.snd << "}"; return out;}template< typename T>ostream &operator<< (ostream &out,const set<T> x){ for(auto &it : x){ out << it << " "; } return out;}template< typename T>ostream &operator<< (ostream &out,const multiset<T> x){ for(auto &it : x){ out << it << " "; } return out;}template< typename T,typename V>ostream &operator<< (ostream &out,const map<T,V> x){ for(auto &it : x){ out << "[" << it.fst << "]" << " = " << it.snd << "\n"; } return out;}template< typename T>ostream &operator<< (ostream &out,const vector<T> x){ for(int i = 0;i < x.size() - 1; ++i){ out << x[i] << " "; } out << x.back(); return out;}template< typename T>ostream &operator<< (ostream &out,const vector<vector<T> > x){ for(int i = 0;i < x.size() - 1; ++i){ out << "[" << i << "]" << " = {" << x[i] << "}\n"; } out << "[" << x.size() - 1 << "]" << " = {" << x.back() << "}\n"; return out;}

const int N = 1e6 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
int a[N];
void solve(){
    int n;
    cin >> n;
    for(int i = 0;i < n; ++i){
        cin >> a[i];
    }
    sort(a,a + n);
    int ans = -1;
    int cnt = 1;
    for(int i = n - 1;i >= 0; --i){
        ans = max(ans,min(a[i],cnt));
        cnt++;
    }
    cout << ans;
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    int k;
    cin >> k;
    for(int i = 0;i < k; ++i){
        solve();
        cout << "\n";
    }
    return 0;
}

