#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, a, b; cin >> t;
	while (t--)
    {
        cin >> a >> b;
        cout << (__gcd(a, b) == 1 ? "Finite" : "Infinite") << '\n';
    }
    return 0;
}
