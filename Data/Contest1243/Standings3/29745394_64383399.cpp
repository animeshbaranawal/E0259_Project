#include<bits/stdc++.h>
#define pll              pair<long,long>
#define pii              pair<int,int>
#define scn(a)           scanf("%d", &a)
#define scn2(a, b)       scanf("%d%d", &a, &b)
#define scn3(a, b, c)    scanf("%d%d%d", &a, &b, &c)
#define pairl            pair<ll , ll >
#define scnl(a)          scanf("%lld", &a)
#define scnl2(a, b)      scanf("%lld%lld", &a, &b)
#define scnl3(a, b, c)   scanf("%lld%lld%lld", &a, &b, &c)
#define scns(s)          scanf("%s",s)
#define prts(s)          printf("%s\n",s)
#define prt(a)           printf("%d\n", a)
#define prtl(a)          printf("%lld\n", a)
#define prs(a)           printf("%d ", a)
#define prt2(a, b)       printf("%d %d\n", a, b)
#define prt3(a, b, c)    printf("%d %d %d\n", a, b, c)
#define prsl(a)          printf("%lld ", a)
#define prtl2(a, b)      printf("%lld %lld\n", a, b)
#define prtl3(a, b, c)   printf("%lld %lld %lld\n", a, b, c)
#define ptcs(a)          printf("Case %d: ", a)
#define pf               printf
#define sc               scanf
#define vi               vector<int >
#define vil              vector<ll >
#define pb               push_back
#define mem(a, b)        memset((a), (b), sizeof(a))
#define lg2(n)           (31-__builtin_clz(n))
#define N                100005
#define inf              999999999
#define ll               long long
#define ull              unsigned long long
#define MIN              INT_MIN
#define MAX              INT_MAX
#define fast             ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int, int> , null_type, less<pair<int, int> >, rb_tree_tag, tree_order_statistics_node_update> odrst;
ll gcd(ll a, ll b){if(b==0) {return a;}return gcd(b, a % b);}
ll BigMod(ll B,ll P,ll M){     ll R=1; while(P>0)      {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;}
//________________________________________________________________________________________________________________
double arr[N];
ll dp[26],dp1[26];
int main()
{
    fast;
    ll t,n,x;
    string s,s1;
    cin>>t;
    while(t--)
    {
        x=0;
        bool ok=true;
        char b,d;
        cin>>n>>s>>s1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                x++;
                if(ok)
                {
                    b=s[i];
                    d=s1[i];
                    ok=false;
                }
                else
                {
                    if(b==s[i] && d==s1[i]) ok=true;
                }
            }
        }
        if(ok && (x==0 || x==2)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
