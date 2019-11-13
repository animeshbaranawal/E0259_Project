#include<bits/stdc++.h>
#define int long long int
#define ul unsigned int
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL) ,cout.tie(NULL)
#define srt(v) sort(v.begin(),v.end());
using namespace std;

const int mod=1e9+7;
const int maxi=1e18;



int power(int a,int b,int p){
    if(a==0)
        return 0;
    if(b==0)
        return 1;

    int y;
    if(b%2==0){
        y=power(a,b/2,p);
        y=(y*y)%p;

    }
    else{
        y=a%p;
        y=(y*power(a,b-1,p)%p)%p;


    }

    return (y+p)%p;

}


int modInverse(int n,int p){
    power(n,p-2,p);
}

int ncrmod(int n,int r,int p){

    if(r==0)return 1;

    int fact[r+1];
    fact[0]=1;

    for(int i=1;i<=n;i++){

        fact[i]=(fact[i-1]*i)%p;
    }
    return (fact[n]*modInverse(fact[r],p)%p * modInverse(fact[n-r],p)%p)%p;

}
int test(){
    int te;
    cin>>te;
    return te;
}
signed main(){
    fast;

    int t=test();
    while(t--){

        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int cnt=0;
        vector<int>v;
        rep(i,n){

            if(a[i]!=b[i]){
                cnt++;
                v.push_back(i);
            }
        }

        if(cnt>2 || cnt==1){
            cout<<"No"<<endl;
        }
        else{
            if(a[v[0]]==a[v[1]] && b[v[0]]==b[v[1]]){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        }


    }

    


}
