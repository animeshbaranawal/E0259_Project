#include <bits/stdc++.h>

#define lo(i, n, m) for (int i = n; i < m; i++)
#define loe(i, n, m) for (int i = n; i <= m; i++)
#define rlo(i, n, m) for (int i = n - 1; i >= m; i--)
#define rloe(i, n, m) for (int i = n; i >= m; i--)
#define pb push_back
#define mk make_pair
#define scd(x) scanf("%d", &x)
#define scs(x) scanf("%s", x)
#define sclf(x) scanf("%lf", &x)
#define scll(x) scanf("%lld", &x)
#define clr(a, b) memset((a), (b), sizeof(a))
typedef long long LL;
using namespace std;
// const int INF = 0x3f3f3f3f;
// const int INF = 0x7fffffff;
// const LL INF = 0x3f3f3f3f3f3f3f3f;
// const LL INF = 0x7fffffffffffffff;
const int NIL = -1;
template <class T>
inline T mx(T a, T b) {return a > b ? a : b;}
template <class T>
inline T mi(T a, T b) {return a < b ? a : b;}
template <class T>
inline void sw(T &a, T &b) {
    T t = a; a = b; b = t;
}
template <class T>
inline T mabs(T x) {return x < 0 ? -x : x;}
inline char gc() {
    char ret;
    while ((ret = getchar()) == ' ' || ret == '\n' || ret == '\t');
    return ret;
}
template <class T>
inline T sq(T x) {return x * x;}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int k, n;
    cin >> k;
    while (k--) {
        cin >> n;
        string s, t;
        cin >> s >> t;
        int cnt = 0;
        lo(i, 0, n) if (s[i] != t[i]) ++cnt;
        if (cnt != 0 && cnt != 2) {
            cout << "No" << '\n';
            continue;
        }
        if (cnt == 2) {
            int pre = -1;
            lo(i, 0, n) {
                if (s[i] != t[i]) {
                    if (pre == -1) {
                        pre = i;
                    } else {
                        sw(s[pre], t[i]);
                        break;
                    }
                }
            }
        }
        cout << (s == t ? "Yes" : "No") << '\n';
    }
    return 0;
}
