#include <bits/stdc++.h>
using namespace std;
#define fr first
#define sc second
#define pb push_back
#define ll long long
#define pi pair<int,int>
#define go ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int t;
int main()
{
    go;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k,A,B;
        cin>>a>>b>>c>>d>>k;
        A=a/c+(a%c!=0);
        B=b/d+(b%d!=0);
        if(A+B<=k)
            cout<<A<<" "<<B<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
