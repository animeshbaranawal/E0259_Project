#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define mkp make_pair
#define in insert
#define er erase
#define fd find
#define fr first
#define sc second
typedef long long ll;
typedef long double ld;
const ll INF=0x3f3f3f3f3f3f3f3f;
const ll llinf=(1LL<<62);
const int inf=(1<<30);
const int nmax=1e5+50;
const int mod=1e9+7;
using namespace std;
int n,ad,l,i,j;
vector<int>a[500];
int main()
{
	//freopen("sol.in","r",stdin);
	//freopen("sol.out","w",stdout);
	//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
	cin>>n;
	l=0,ad=1;
	for(i=n*n;i>=1;i--)
	{
		l+=ad;
		if(l==0)ad=1,l=1;
		if(l==n+1)ad=-1,l=n;
		a[l].pb(i);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<a[i].size();j++)cout<<a[i][j]<<' ';
		cout<<'\n';
	}
	return 0;
}
