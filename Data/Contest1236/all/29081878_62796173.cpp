#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define vi vector<int>
#define vll vector<ll>
#define si set<int>
#define sll set<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fo_(i,a,b) for(int i=a;i>b;i--)
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define debug(x)  cerr << #x << " = " << x << endl
#define pb push_back
#define F first
#define S second
#define OK order_of_key
#define FO find_by_order
#define PI 3.14159265
#define nmax 100100
const ll inf = std::numeric_limits<ll>::max();
const int infint = std::numeric_limits<int>::max();
const ll mod = 1e9+7;
using namespace __gnu_pbds;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vi v,c;

vi ans[310];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    c.resize(n);
    fo(i,0,n) v.pb(i);
    fo(j,0,n){
        fo(i,0,n) ans[i].pb(j*n+v[i]+1);
        fo(i,0,n) c[i] = v[n-i-1];
        fo(i,0,n) v[i] = c[i];
    }
    fo(i,0,n) {for(auto j : ans[i]) cout << j << ' '; cout << '\n';}
    return 0;
}

