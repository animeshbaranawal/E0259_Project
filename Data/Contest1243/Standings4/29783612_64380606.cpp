#include <bits/stdc++.h>

using namespace std;

#define DEBUG 0

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define TRACE(x) if(DEBUG) cout << #x _ "=" _ x << endl
#define TRACE_VEC(v) if(DEBUG){ cout << #v << _ "="; for(auto e : v) cout _ e; cout << endl; }
#define _ << " " <<
#define endl "\n"
#define IN_VEC(v, n) int temp_inv_var; REP(i, n){ cin >> temp_inv_var; v.push_back(temp_inv_var); }
#define IN_ARR(a, n) REP(i, n) cin >> (a)[i]
#define ll int64_t
#define i32 int32_t

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int32_t main(){
    ios_base::sync_with_stdio(0);
    string s; string t;
    int k;
    cin >> k;
    REP(mm, k){
        int n;
        cin >> n;
        cin >> s;
        cin >> t;
        int nd = 0;
        int di;
        int dj;
        REP(i, n){
            if(s[i] != t[i]){
                nd++;
                if(nd == 1) di = i;
                if(nd == 2) dj = i;
            }
        }
        if(nd != 2){
            cout << "No" << endl;
        }
        else{
            if(s[di] == s[dj] && t[di] == t[dj]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}
