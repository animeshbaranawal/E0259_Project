#include<bits/stdc++.h>
using namespace std;
#define int long long int
// #define lli long long int
#define ld long double
#define ff first
#define ss second
#define mp make_pair
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pii pair<int, int>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define f(i,j,l) for(i=j;i<l;i++)

int const mod = 1e9+7;
int power(int a,int b){
    int res = 1;
    while(b){
        if(b&1){
            res = res*a;
            // res %= mod;
        }
        a=a*a;
        // a%=mod;
        b=b/2;
    }
    return res;
}

// int inverse_mod(int x){
//     return power(x,mod-2);
// }

int const N = 1e5+5;



void solve(){
    int n,i,j,l;
    cin>>n;
    vector<int> a;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        a.pb(x);
    }
    sort(all(a));
    int ans = 0;
    int x = 0;
    int y = 0;

    j = n/2 + (n%2);

    for(i=0;i<j;i++){
        x = x + a[n-1-i];
    }
    j = n/2;
    for(i=0;i<j;i++){
        y += a[i];
    }

    ans = x*x + y*y;
    cout<<ans<<endl;
}


int32_t main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    for(int tt=1;tt<=t;tt++){
        // cout<<"Case #"<<tt<<": ";
        solve();
    }
    return 0;
}

/*

 */