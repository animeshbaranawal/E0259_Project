#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
const double eps = 1e-10;
const int MOD = 1000000007;
const int INF = 1000000000;
const ll LINF = 1ll<<50;
template<typename T>
void printv(const vector<T>& s) {
  for(int i=0;i<(int)(s.size());++i) {
    cout << s[i];
    if(i == (int)(s.size())-1) cout << endl;
    else cout << " ";
  }
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);
  int k; cin >> k;
  while(k > 0) {
    k--;
    int n; cin >> n;
    string s, t; cin >> s >> t;
    map<pair<char, char>, int> mp;
    for(int i=0;i<n;++i) {
      if(s[i] != t[i]) mp[make_pair(s[i], t[i])]++;
    }
    bool ok = false;
    if((int)(mp.size()) == 1) {
      for(auto e: mp) {
        ok = e.second == 2;
      }
    }
    cout << (ok ? "Yes" : "No") << endl;
  }
}
