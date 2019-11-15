#include<iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/detail/standard_policies.hpp>
#define ll long long
#define pb push_back
#define mp make_pair
#define inf 1000000007
#define pi acos(-1.0)
#define pf(a) cout<<"a "<<a<<endl;
#define ii pair<long long , long long>
#define mem(a,x) memset(a,x,sizeof(a))
#define fast ios_base::sync_with_stdio(0),cin.tie(0)
#define sf(a) scanf("%lld",&a)
#define sff(a,b) scanf("%lld %lld",&a,&b)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
using namespace __gnu_pbds;

#define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); deb(_it, args); }
void deb(istream_iterator<string> it) {cout<<endl;}
template<typename T, typename... Args>
void deb(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ",   ";
    deb(++it, args...);
}

typedef tree< ll , null_type, less< ll >, rb_tree_tag, tree_order_statistics_node_update > order_set;

ll Pow(ll base,ll power) {ll ans=1; while(power){if(power&1)ans=(ans*base);base=(base*base);power>>=1;}return ans;}
ll BigMod(ll base,ll power,ll mod) {ll ans=1; while(power){if(power&1)ans=(ans*base)%mod;base=(base*base)%mod;power>>=1;}return ans;}
ll ModInverse(ll power,ll mod) {return BigMod(power,mod-2,mod);}

/*--------------------Code starts here-----------------------*/


int main(){
    ll r;
    cin>>r;
    for(ll tt=1;tt<=r;tt++)
    {
        ll n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            if(s[i]!=t[i]){
                v.pb(i);
            }
        }
        //debug(v.size());
        if(v.size()==2){
            ll fs=v[0];
            ll sc=v[1];
            //debug(s[fs],t[sc]);
            if(s[fs]==s[sc] && t[fs]==t[sc]){
                yes;
            }
            else no;
        }
        else no;

    }
    return 0;
}
