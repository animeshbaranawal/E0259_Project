#include<bits/stdc++.h>
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 
int n,i,j,k,l,sum=0,flag=0,t,a[305][305],ans=0;
void solve(){
    cin>>n;
    int cnt = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2 ==0) a[j][i]=cnt++;
            else a[n-1-j][i]=cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
signed main()
{
    ios
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}