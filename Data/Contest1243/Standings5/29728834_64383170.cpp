//#pragma GCC optimize("O3")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4")
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define y1 bbp
#define sz size()
using namespace std;
ll const N=1e6+7,inf=1e9+7;
ll a[N],b[N],qq,m,n,k,x,y,r,ans,q;
string s,t;
pair <ll,ll> p[N];
//vector <ll> ot,v;
ll us[N];
char ch;
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>qq;
    for (int ii=0;ii<qq;ii++)
    {
        cin>>n>>s>>t;
        k=0;
        vector<char> v,ot;
        for (int i=0;i<n;i++)
        {
            if (s[i]!=t[i]) k++,v.pb(s[i]),ot.pb(t[i]);
        }
        if (k==0) cout<<"Yes"; else
            if (k==2 && v.sz==2)
            {
                if (v[0]==v[1] && ot[1]==ot[0])
                cout<<"Yes"; else cout<<"No";
            } else cout<<"No";
        cout<<endl;
    }
}
