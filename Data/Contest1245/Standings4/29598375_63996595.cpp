#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
#endif
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (__gcd(a, b) > 1)
			puts("Infinite");
		else
			puts("Finite");
	}
	return 0;
}
