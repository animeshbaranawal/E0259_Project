#include<bits/stdc++.h>
#define pb           push_back
#define pii          pair<int,int>
#define vi           vector<int>
#define vpii         vector<pair<int,int>>
#define gph          map<int, vector<int>>
#define mp           make_pair
#define FOR(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD0(i, n) for (int i = (int)n; i >= 0; i--)
#define FORD1(i, n) for (int i = (int)n; i >= 1; i--)
#define FORS(i, n) for(; i < (int)(n); i++)
#define debug(X) { cout << #X << " = " << (X) << endl; }
#define printArr(A,n) { cout << #A << " = "; FOR(i,n) cout << A[i] << ' '; cout << endl; }
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int q;cin >> q;
   while(q--){
    int n;cin >> n;
    vector<int> vals(n);
    FOR(i, n)cin >> vals[i];
    sort(vals.begin(), vals.end());
    int ans = 0;
   
    for(int i = n-1;i >= 0; i--){
      int width = n - i;
      int height = vals[i];
      if(width > height)break;
      ans = max(ans, width);
    }
    cout << ans <<endl;
   } 
}


