#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long
#define pb push_back
#define pi pair<int,int>
#define pii pair<int,pi>
#define go ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int t;
int main()
{
    go;
    cin>>t;
    while(t--)
    {
        int n;
        string s,t;
        cin>>n>>s>>t;
        string a="",b="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
                a+=s[i],b+=t[i];
        }
        if(a.size()==0)
            cout<<"Yes\n";
        else if(a.size()!=2||a[0]!=a[1]||b[1]!=b[0])
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
