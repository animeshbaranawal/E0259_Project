/*
$$$$$$$\                      $$\           $$$$$$$\
$$  __$$\                     \__|          $$  __$$\
$$ |  $$ | $$$$$$\   $$$$$$\  $$\  $$$$$$$\ $$ |  $$ | $$$$$$\   $$$$$$\   $$$$$$$\ $$$$$$\
$$$$$$$\ |$$  __$$\ $$  __$$\ $$ |$$  _____|$$$$$$$\ | \____$$\ $$  __$$\ $$  _____|\____$$\
$$  __$$\ $$ /  $$ |$$ |  \__|$$ |\$$$$$$\  $$  __$$\  $$$$$$$ |$$ |  \__|$$ /      $$$$$$$ |
$$ |  $$ |$$ |  $$ |$$ |      $$ | \____$$\ $$ |  $$ |$$  __$$ |$$ |      $$ |     $$  __$$ |
$$$$$$$  |\$$$$$$  |$$ |      $$ |$$$$$$$  |$$$$$$$  |\$$$$$$$ |$$ |      \$$$$$$$\\$$$$$$$ |
\_______/  \______/ \__|      \__|\_______/ \_______/  \_______|\__|       \_______|\_______|
*/
#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define MP make_pair
#define INS insert
#define LB lower_bound
#define UB upper_bound
#define pii pair <int,int>
#define pll pair <long long, long long>
#define si pair<string, int>
#define is pair<int, string>
#define X first
#define Y second
#define _ << " " <<
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORD(i, a, b) for (int i = (a); i > (b); --i)
#define FORR(i, l, r) for (int i = (l); i <= (r); ++i)
#define FORP(i, a, b) for ((i) = (a); (i) < (b); ++i)
#define FORA(i, x) for (auto &i : x)
#define REP(i, n) FOR(i, 0, n)
#define BITS(x) __builtin_popcount(x)
#define MSET memset
#define MCPY memcpy
#define SQ(a) (a) * (a)
#define TRACE(x) cout << #x " = " << (x) << '\n';
#define YES cout << "YES\n"
#define NO cout << "NO\n"

typedef long long ll;
typedef long double ld;
typedef vector <int> vi;
typedef vector <pii> vpi;
typedef vector <ll> vll;
typedef vector <pll> vpl;
typedef vector <double> vd;
typedef vector <ld> vld;
typedef vector<si> vsi;
typedef vector<is> vis;
typedef vector<string> vs;
//((float) t)/CLOCKS_PER_SEC

const int MOD = 1e9 + 7;
const double PI = acos(-1);
const int INF = 1e9 + 10;
const ll INFL = 1e18 + 10;
const int ABC = 30;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const int dox[] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int doy[] = {0, 0, -1, 1, -1, 1, -1, 1};

inline int sum(int a, int b){
	if (a + b < 0)
		return (a + b + MOD) % MOD;
	return (a + b) % MOD;
}

inline void add(int &a, int b){
	a = sum(a, b);
}

inline int mul(int a, int b){
	return (ll)a * (ll)b % MOD;
}

inline int sub(int a, int b){
	return (a - b + MOD) % MOD;
}

inline int pot(ll pot, int n){
	ll ret = 1;
	while (n){
		if (n & 1)
			ret = (ret * pot) % MOD;
			pot = (pot * pot) % MOD;
			n >>= 1;
		}
	return ret;
}

inline int divide(int a, int b){
	return mul(a, pot(b, MOD - 2));
}

ll lcm(ll a, ll b){
	return abs(a * b) / __gcd(a, b);
}

inline double ccw(pii A, pii B, pii C){
	return (A.X * B.Y) - (A.Y * B.X) + (B.X * C.Y) - (B.Y * C.X) + (C.X * A.Y) - (C.Y * A.X);
}

inline int CCW(pii A, pii B, pii C){
	double val = ccw(A, B, C);
	double eps = max(max(abs(A.X), abs(A.Y)), max(max(abs(B.X), abs(B.Y)), max(abs(C.X), abs(C.Y)))) / 1e9;
	if (val <= -eps)
		return -1;
	if (val >= eps)
		return 1;
	return 0;
}

void to_upper(string &x){
	REP(i, sz(x))
		x[i] = toupper(x[i]);
}

void to_lower(string &x){
	REP(i, sz(x))
		x[i] = tolower(x[i]);
}

string its(ll x){
	if (x == 0)
		return "0";
	string ret = "";
	while (x > 0){
		ret += (x % 10) + '0';
		x /= 10;
	}
	reverse(all(ret));
	return ret;
}

ll sti(string s){
	ll ret = 0;
	REP(i, sz(s)){
		ret *= 10;
		ret += (s[i] - '0');
	}
	return ret;
}

const int N = 2005;

int p[N], on[N], S[N];

int dad(int x){
	return p[x] = (p[x] == x ? x : dad(p[x]));
}

int merge(int a, int b){
	if (S[a] >= S[b]){
		p[b] = a;
		on[a] = max(on[a], on[b]);
		S[a] += S[b];
	} else {
		p[a] = b;
		on[b] = max(on[a], on[b]);
		S[b] += S[a];
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
		
	int n; cin >> n;
	vpl v(n);
	REP(i, n)
		cin >> v[i].X >> v[i].Y;

	vll c(n);
	REP(i, n)
		cin >> c[i];

	vll k(n);
	REP(i, n)
		cin >> k[i];

	vector <vll> pq;
	REP(i, n)
		pq.PB({c[i], i, -1});

	REP(i, n)
		FOR(j, i + 1, n)
			pq.PB({(abs(v[i].X - v[j].X) + abs(v[i].Y - v[j].Y)) * (k[i] + k[j]), i, j});

	sort(all(pq));

	REP(i, n)
		p[i] = i, S[i] = 1;
	memset(on, 0, sizeof on);

	vll V;
	vpl E;

	ll sol = 0;
	FORA(x, pq){
		ll a = x[1], b = x[2];
		ll A = x[1], B = x[2];
		if (b == -1){
			a = dad(a);
			if (on[a])
				continue;
			V.PB(A);
			sol += x[0];
			on[a] = 1;
		} else {
			a = dad(a), b = dad(b);
			if (a == b)
				continue;
			if (on[a] && on[b])
				continue;
			E.PB({A, B});
			merge(a, b);
			sol += x[0];
		}
	}

	cout << sol << '\n';
	cout << sz(V) << '\n';
	FORA(x, V)
		cout << x + 1 << ' ';
	cout << '\n';
	cout << sz(E) << '\n';
	FORA(x, E)
		cout << x.X + 1 _ x.Y + 1 << '\n';
	return 0;
}