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
#define MX 305
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
int n,a[MX][MX],cnt;
main(){
	IOS;
	cin>>n;
	REP(i,0,n){
		if(i%2) REP(j,0,n) a[j][i] = ++cnt;
		else RREP(j,n,0) a[j][i] = ++cnt;
	}
	REP(i,0,n){
		REP(j,0,n) cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}


