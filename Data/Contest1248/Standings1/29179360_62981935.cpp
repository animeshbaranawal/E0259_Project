// I am grateful to everyone who taught or motivated me to code.
// Without your support, nothing would have been done.
using namespace std;
#include <iomanip>
#include <iostream>
#include <fstream>
#ifdef SEM_LOCAL
bool DEBUG = true;
#else
bool DEBUG = false;
#endif
#define FAST {ios::sync_with_stdio(0);cin.tie(0);cout<<setprecision(10)<<fixed;}
#define FOR(a,b,c) for(int a=(b); a<(int)(c); ++a)
#define DB(a) if(DEBUG) cerr<<#a<<" "<<a<< "\n";
#define all(v) (v).begin(),(v).end()
using ll = long long;
using ull = unsigned long long;
int MAXINT=2e9;
ll MAXLL=9e18;

// Includes
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>

// Variables

// Functions

// Main
int main()
{
#ifdef SEM_LOCAL
    ifstream cin("tortsis.txt");
    ofstream cout("tortval.txt");
#endif
    FAST
    //

    ll n;
    cin >> n;
    vector<ll> data;
    FOR(i,0,n)
    {
        ll t;
        cin >> t;
        data.push_back(t);
    }
    sort(all(data));
    reverse(all(data));

    ll a = 0, b = 0;
    FOR(i,0,(n+1)/2)
    {
        a += data[i];
    }
    FOR(i,(n+1)/2,n)
    {
        b += data[i];
    }
    cout << a*a + b*b;
}
