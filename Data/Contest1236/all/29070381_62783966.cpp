/*
त्यक्तवाधर्मं च लोभं च
मोहंचो द्यमास्थिता।
युद्ध्यध्वमनहंकारा
यतो धर्मस्ततो जयः।।
*/
#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds;
using namespace std;
#define int     long long int
#define ld      long double
#define pb      push_back
#define pa      pair<int,int>
#define v1d     vector<int>
#define v2d     vector<vector<int> >
#define M       1000000007
#define MN      LLONG_MIN
#define MX      LLONG_MAX
#define ff      first
#define ss      second
#define endl    "\n"
#define v1s     vector<string>
#define S(v)    sort(v.begin(),v.end())
#define RS(v)   sort(v.rbegin(),v.rend())
#define R(v)    reverse(v.begin(),v.end())
#define mxpq(T)    priority_queue <T>
#define mnpq(T)    priority_queue<T,vector<T>,greater<T>>
#define T       int tc;cin>>tc;while(tc--)
#define p2d(v)     for(auto a:v){for(auto b:a)cout<<b<<" ";cout<<endl;}
#define P(a)    cout<<a<<" ";
#define p1d(v)      for(auto a:v)cout<<a<<" ";cout<<endl

void Weapons19(){
    cout<<fixed<<setprecision(16);
    cin.sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
    #endif
}
#define qqq 400005

int32_t main(){
    Weapons19();
 	T{
 		int a,b,c;cin>>a>>b>>c;
 		int ans=min(b,c/2);
 		b-=ans;c-=ans*2;
 		int t=ans+ans*2;
 		ans=min(a,b/2);
 		t+=ans*3;
 		cout<<t<<endl;
 	}



















}

