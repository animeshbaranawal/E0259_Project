#include<bits/stdc++.h>
#define REP(i,j,k) for(int i=j;i<k;++i)
#define RREP(i,j,k) for(int i=(int)j-1;i>=k;--i)
#define int long long
#define pb emplace_back
#define P pair<int,int>
#define F first
#define S second
#define ALL(x) x.begin(),x.end()
#define sz(a) (int)(a).size()
#define MX 100005
#define oo 1e18
#define L d*2
#define R (d*2+1)
#define mid (l+r>>1)
#define Ls l,mid,d*2
#define Rs mid+1,r,d*2+1
#define MIN(x,y) (x=min(x,(y)))
#define MAX(x,y) (x=max(x,(y)))
#define mo (int)(1e9+7)
#define IOS cin.tie(0) ,cout.tie(0), cout.sync_with_stdio(0)
using namespace std;
int t,n,ans;
string s;
main(){
	IOS;
	cin>>t;
	while(t--){
		cin>>n>>s,ans = 0;
		REP(i,0,n) if(s[i]=='1') MAX(ans,max(n-i,i+1));
		cout<<(ans?ans*2:n)<<"\n";
	}
}

