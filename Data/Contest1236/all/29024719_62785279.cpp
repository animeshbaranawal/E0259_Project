#include<bits/stdc++.h>

#define pb push_back
#define vi vector < int >
#define ii pair < int, int >
#define vii vector < pair < int, int > >
#define vvi vector < vector < int > >
#define ll long long
#define X first
#define Y second
#define mp make_pair
#define FOR( i, lo, hi ) for( int i = (lo);i < (hi);i++ )
#define DFOR( i, hi, lo ) for( int i = (hi);i >= (lo);i-- )
#define pqueue priority_queue

using namespace std;

const long long int MOD = 1e9 + 7;

ll ADD( ll a, ll b )
{
	return ( ( a % MOD ) + ( b % MOD ) ) % MOD;
}

ll SUB( ll a, ll b )
{
	return ( ( a % MOD ) - ( b % MOD ) + MOD ) % MOD;
}

ll MUL( ll a, ll b )
{
	return ( ( a % MOD ) * ( b % MOD ) ) % MOD;
}

ll POT( ll n, ll k )
{
	if ( k == 0 )
		return 1;

	ll ret = POT( n, k / 2 );
	ret = MUL( ret, ret );

	if ( k % 2 )
		return MUL( ret, n );
	return ret;
}

ll DIV( ll a, ll b )
{
	return MUL( a , POT( b, MOD - 2 ) );
}

bool isPrime( ll x )
{
	for ( ll i = 2;i <= sqrt( x ) + 1; ++i )
		if ( x % i )
			return false;
	return true;
}

int t, a, b, c;

void solve( )
{
	cin >> a >> b >> c;
	int ans = 0;
	int m1 = min( a, b / 2 ), m2 = min( b, c / 2 );
	ans += m2 * 3;
	b -= m2;
	ans += min( a, b / 2 ) * 3;
	cout << ans << "\n";
}

int main()
{
	cin >> t;
	while ( t-- )
		solve();
	return 0;
}

