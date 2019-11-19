#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <set>

using namespace std;

typedef long long i64;
typedef i64 int_t;
typedef vector<int_t> vi;
typedef vector<vi> vvi;

typedef pair<int_t, int_t> pi;

#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define pb push_back
#define sz(a) int((a).size())
#define all(c) (c).begin(), (c).end()
#define REP(s, e, i) for(i=(s); i < (e); ++i)

template<typename T> T gcd(T a, T b) {
  if(a < b) swap(a, b);
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
  i64 n;
  cin >> n;
  i64 p = 2;
  i64 g = n;
  while(p * p <= n) {
    if(n % p == 0) {
      g = gcd(g, p);
      g = gcd(g, n / p);
    }
    ++p;
  }
  cout << g << endl;
  
  return 0;
}
