#include<bits/stdc++.h>
#define int long long int
#define ull unsigned long long int
#define getFaster ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define rep(i,init,n) for(int i=init;i<n;i++)
#define rev(i,n,init) for(int i=n;i>=init;i--)
#define MAXN 1200005
#define MOD 1000000007
#define f first
#define s second
#define endl '\n'
#define pii pair<int,int>
#define precise cout<<fixed<<setprecision(10)
using namespace std;
const double PI = atan(1.0)*4;
const int64_t INF=100000000000000003;
const int32_t LOG=21;
const int BIG=pow(2,20);
int32_t main(){
        getFaster;
         int n;
         cin>>n;
         int arr[n][n];
         int cur=1;
         rep(j,0,n)
         {
            if(!(j&1))    
            rep(i,0,n)
            {
                  arr[i][j]=cur;
                  cur++;  
            }
            else
            rev(i,n-1,0)
            {
                arr[i][j]=cur;
                cur++;
            }    
         }
         rep(i,0,n)
         {
            rep(j,0,n)
            cout<<arr[i][j]<<" ";
            cout<<endl;
         }
        return 0;
}