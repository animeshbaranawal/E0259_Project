/**
**      author:XiaKIsGod
**      time:2019.9
                           _ooOoo_
                          o8888888o
                          88" . "88
                          (| -_- |)
                          O\  =  /O
                       ____/`---'\____
                     .'  \\|     |//  `.
                    /  \\|||  :  |||//  \
                   /  _||||| -:- |||||-  \
                   |   | \\\  -  /// |   |
                   | \_|  ''\---/''  |   |
                   \  .-\__  `-`  ___/-. /
                 ___`. .'  /--.--\  `. . __
              ."" '<  `.___\_<|>_/___.'  >'"".
             | | :  `- \`.;`\ _ /`;.`/ - ` : | |
             \  \ `-.   \_ __\ /__ _/   .-` /  /
        ======`-.____`-.___\_____/___.-`____.-'======
                           `=---='
        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                   佛祖保佑       永无BUG
**/
#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define pii pair<int,int>
#define mk make_pair
#define endl "\n"
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FIN freopen("1.txt","r",stdin)
#define all(x) x.begin(),x.end()
#define each(e,v) for(auto e: v)
#define debug(a,n) rep(i,0,n) cout<<a[i]<<" ";cout<<endl;
#define Time cout<<"Time="<<clock()-start_clock<<"ms"<<endl
#define mem(x,v) memset(x,v,sizeof(x))
#define repn(i,a,n) for(int i=a;i<=n;i++)
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
inline int reads(char s[]){char c;int len = 0;while ((c = getchar()) != ' ' && c!='\n') s[len++] = c;return len;}
template<typename T> inline void write(T x) {char F[60]; if( x < 0 ) putchar( '-' ),x=-x;F[0] = x % 10 + '0' ;x/=10;int cnt = 1 ;while(x) {F[cnt++] = x % 10 + '0' ;x /= 10 ;}while(cnt) putchar(F[--cnt]);putchar(10);}
template<typename T> inline bool read(T &ret) {char c;ret = 0;T sgn = 1;do { c = getchar(); if(c==EOF) return false;} while ((c < '0' || c > '9') && c != '-');if (c == '-') sgn = -1; else ret = c - '0';while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0'); ret*= sgn;return true;}
template<typename T> inline void _max(T &a,const T b){if(a<b) a = b;}
template<typename T> inline void _min(T &a,const T b){if(a>b) a = b;}
template<typename T> inline void _add(T &a,const T b,const T MOD){a = (a+b)%MOD;}
template<typename T> inline T _pow(T a,T b,const T MOD){T ans = 1;while(b){if(b&1) ans = ans*a%MOD;a = a*a%MOD;b>>=1;}return ans;}
using namespace std;
LL extend_gcd(LL a,LL b,LL& x,LL& y){
	if(!b){
		x = 1;y = 0;
		return a;
	}
	LL d = extend_gcd(b,a%b,y,x);
	y -= x*(a/b);
	return d;
}
int main(){
	#ifndef ONLINE_JUDGE
		FIN;
		int start_clock = clock();
	#endif
	FIO;
	LL n,p,w,d;
	read(n);read(p);read(w);read(d);
	LL x,y;
	LL gcd = extend_gcd(w,d,x,y);
	if(p%gcd!=0) cout<<"-1"<<endl;
	else{
		LL t = w / gcd;
		y%=t;
		y *= p / gcd % t;
		y = (y % t + t)%t;
		x = (p-y*d)/w;
		LL z = n-x-y;
		if(x>=0&&z>=0){
			cout<<x<<" "<<y<<" "<<z<<endl;
		}else{
			cout<<"-1"<<endl;
		}	
	}
	return 0;
}

