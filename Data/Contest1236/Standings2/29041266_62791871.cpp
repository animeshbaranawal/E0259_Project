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
            res %= mod;
        }
        a=a*a;
        a%=mod;
        b=b/2;
    }
    return res;
}

// int inverse_mod(int x){
//     return power(x,mod-2);
// }

int const N = 1e5+5;



void solve(){
    int n,i,j,l,m;
    cin>>n;
    vector<int> ans[n];
    l=0;
    j=0;
    for(i=1;i<=n*n;i++){
        ans[l].pb(i);
        if(j == 0){
            l++;
            if(l == n){
                j = 1;
                l = n-1;
            }
        }
        else{
            l--;
            if(l == -1){
                j = 0;
                l = 0;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


int32_t main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/*

 */