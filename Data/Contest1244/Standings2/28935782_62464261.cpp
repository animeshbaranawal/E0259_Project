/* LittleFall : Hello! */
#include <bits/stdc++.h>
using namespace std; using ll = long long; inline int read();
const int M = 500016, MOD = 1000000007;

int save[M];
int main(void)
{
	#ifdef _LITTLEFALL_
	freopen("in.txt","r",stdin);
    #endif

	int t = read();
	while(t--)
	{
		int a=read(),b=read(),c=read(),d=read(),k=read();
		int t1 = (a+c-1)/c, t2 = (b+d-1)/d;
		if(t1+t2<=k)
			printf("%d %d\n",t1, t2 );
		else
			printf("-1\n");
	}

    return 0;
}


inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}