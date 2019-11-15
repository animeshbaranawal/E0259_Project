#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define F first
#define S second
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define allin(a , x) for(auto a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
template<class T1, class T2>
istream &operator>>(istream &in, pair<T1, T2> &P){
	in >> P.first >> P.second;
	return in;
}
template<class T1, class T2>
ostream &operator<<(ostream &out, const pair<T1, T2> &P){
	out << "(" << P.first << ", " << P.second << ")";
	return out;
}
template<class T>
istream &operator>>(istream &in, vector<T> &arr){
	for(auto &x: arr) in >> x;
	return in;
}
template<class T>
ostream &operator<<(ostream &out, const vector<T> &arr){
	for(auto &x: arr) out << x << ' '; cout << "\n";
	return out;
}
template<class T>
istream &operator>>(istream &in, deque<T> &arr){
	for(auto &x: arr) in >> x;
	return in;
}
template<class T>
ostream &operator<<(ostream &out, const deque<T> &arr){
	for(auto &x: arr) out << x << ' '; cout << "\n";
	return out;
}
 


int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int a , b, c;
		cin>>a>>b>>c;
		int x = a , y = b , z = c;
		int ans1 = 0 , ans2 = 0;
		while(a > 0 && b > 1){
			ans1+=3;
			a--;
			b -= 2;
		}
		while(b > 0 && c > 1){
			ans1+=3;
			b--;
			c -= 2;
		}
		while(y > 0 && z > 1){
			ans2+=3;
			y--;
			z -= 2;
		}
		while(x > 0 && y > 1){
			ans2+=3;
			y-= 2;
			x--;
		}
		cout<< max(ans1 , ans2) << endl;
	}
}