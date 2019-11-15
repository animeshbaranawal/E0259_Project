#include <bits/stdc++.h>

using namespace std;

#define MAX 300005
#define ll long long
#define MOD 1000000007

string str;
int n;
ll dp[MAX];

ll ways(int pos)
{
    if(pos == n || pos == n-1) return 1;
    if(dp[pos] != -1) return dp[pos];
    ll res = 0;
    if(str[pos] == str[pos+1]){
        if(str[pos] == 'u' || str[pos] == 'n'){
            res = (ways(pos+1)+ways(pos+2))%MOD;
        }
        else res = ways(pos+1);
    }
    else res = ways(pos+1);
    res = res%MOD;
    return dp[pos] = res;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    cin >> str;
    n = (int) str.length();
    bool flag = true;
    for(int i=0; i<n; i++){
        if(str[i] == 'w' || str[i] == 'm') flag = false;
    }
    if(flag == false){
        cout << 0;
        return 0;
    }
    memset(dp, -1, sizeof dp);
    ll ans = ways(0);
    cout << ans;
}