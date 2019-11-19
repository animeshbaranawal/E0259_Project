#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define M 1000000007
#define sz(a) (ll)a.size()
#define pll pair<ll,ll>
#define rep(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)
#define sep(i,a,b) for(ll i=(ll)a;i>=(ll)b;i--)
#define mll map<ll,ll>
#define vl vector<ll>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll n,m,a[100005],r[100005],b[100005];
mll mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    rep(i,1,m+1)
        cin>>a[i];
    if(n==1)
    {
        cout<<0<<"\n";
        return 0;
    }
    rep(i,1,n+1)
        r[i]=min(n,i+m+1);
    sep(i,m,1)
    {
        if(mp[a[i]-i-1])
            b[i]=b[mp[a[i]-i-1]];
        else
            b[i]=min(n,a[i]+m-i);
        mp[a[i]-i]=i;
    }
    rep(i,1,m+1)
    {
        if(a[i]-i<1)
            continue;
        r[a[i]-i]=min(r[a[i]-i],b[i]);
    }
    ll ans=n;
    rep(i,1,n+1)
        ans+=(r[i]-i);
    reverse(a+1,a+m+1);
    mp.clear();
    rep(i,1,n+1)
        r[i]=min(n,i+m+1);
    sep(i,m,1)
    {
        if(mp[a[i]-i-1])
            b[i]=b[mp[a[i]-i-1]];
        else
            b[i]=min(n,a[i]+m-i);
        mp[a[i]-i]=i;
    }
    rep(i,1,m+1)
    {
        if(a[i]-i<1)
            continue;
        r[a[i]-i]=min(r[a[i]-i],b[i]);
    }
    rep(i,1,n+1)
        ans+=(r[i]-i);
    cout<<ans;
}
