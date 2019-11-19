#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define x first
#define y second
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ve vector
#define forn(i,n) for(int i=0;i<(int)n;i++)
#define pb push_back
#define sz(a) (int)(a.size())
//using namespace __gnu_pbds;
using namespace std;

// // // functions: find_by_order  & order_of_key
// typedef tree<
// int,
// null_type,
// less<int>,
// rb_tree_tag,
// tree_order_statistics_node_update>
// ordered_set;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

const int inf=(int)2e9;
const long long md=1000000007; //1E9+7
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

ll power(ll a,ll p){
	ll ans=1;
	while(p){
		if(p&1) ans*=a;
		p/=2;a*=a; ans%=md;a%=md;
	}
	return ans;
}
ll mdinv(ll a){return power(a,md-2); }

signed main(){
	IOS
	int tt;cin>>tt;
	while(tt--){
		int n;cin>>n;
		// cout<<"n"<<n<<endl;
		string s;cin>>s;
		int ind1=-1,ind2=-1;
		forn(i,n){
			if(s[i]=='1'){
				ind2=i;
				if(ind1==-1) ind1=i;
			}
		}
		// cout<<"ind"<<" "<<ind<<endl;
		if(ind1==-1){
			cout<<n<<"\n";
			continue;
		}
		int len=max(ind1+1,n-ind1);
		len=max(len,max(ind2+1,n-ind2));
		cout<<2*len<<"\n";
	}
}
