/*
Nahid Hossain
Jahangirnagar University
Roll:54
*/
#include<bits/stdc++.h>
#define ll          long long int
#define db          double
#define pf          printf
#define sf          scanf
#define ff          first
#define ss          second
#define clr         clear()
#define sz          size()
#define pb          push_back
#define mk          make_pair
#define pi          acos(-1)
#define inf         100000000000000000
#define mod         1000000009
#define ull         unsigned long long int
#define f(i,k,n)    for(ll i=k;i<n;i++)
#define fr(i,n,k)   for(i=n;i>=k;i--)
#define ent(a)      scanf("%lld",&a)
#define ent2(a,b)   scanf("%lld%lld",&a,&b)
#define ent3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define mem(a)      memset(a,0,sizeof(a))
#define vec(v,s)    vector<ll>v[s]
#define arr(a,s)    ll a[s];
//#define check(n,pos) (n&(1<<pos))
//#define set(n,pos)  (n|(1<<pos))
//knight and king//
int dr[]= {2, 2, -2, -2, 1, -1, 1, -1};
int dc[]= {1,-1,  1, -1, 2,  2,-2, -2};
int dr1[]= {0, 0, 0, 1, 1, 1, -1, -1, -1};
int dc1[]= {-1,0, 1,-1, 0, 1, -1, 0,   1};
int dr2[]= {0, 0, 1, -1};
int dc2[]= {1,-1, 0,  0};
////////////////////////////
#define ma 6006
using namespace std;
int a[ma];

int main()
{
    ll tc,a,b,x,y,k,i,j;
    cin>>tc;

    while(tc--)
    {
        cin>>a>>b>>x>>y>>k;
        ll ans=-1,ans1=-1;
        for(i=0;i<=k;i++)
        {
            ll p=i*x;
            ll q=(k-i)*y;
            if(p>=a&&q>=b)
            {
                ans=i;
                ans1=k-i;
                break;
            }
        }
        if(ans==-1)cout<<ans<<endl;
        else cout<<ans<<" "<<ans1<<endl;
    }
}
