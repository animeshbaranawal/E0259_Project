#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef arrias
    freopen("true.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        bool find = 0;
        for (int i = 0; i <= 100; ++i) {
            for (int j = 0; j <= 100; ++j) {
                if (i*c >= a && j * d >= b && i + j <= k) {
                    cout << i << " " << j;
                    find = 1;
                    goto ex;
                }
            }
        }
        ex:
        if (!find) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
