#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
#include<climits>
#include<set>
#include<map>
#include<cmath>
#include<iomanip>
#include<iterator>
#include<queue>
#include<stack>
#include<cctype>
#include<deque>
#include<time.h>
#include<bitset>

//by Skeef79

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:16777216")
#define pb push_back
#define en '\n'
#define for0(i,n) for(int i = 0;i<n;i++)
#define for1(i,n) for(int i = 1;i<n;i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define vec vector
#define pii pair<int,int>
#define pll pair<ll,ll>
#define REP(a,i,b) for (int i = a;i<b;i++);

using namespace std;

const int INF = 2000000000;
const ll LINF = 2000000000000000000;

template<typename T> void print(vector<T>& a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';
}

template<typename T> void print(deque<T>& a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';
}

template<typename T> void print(vector<vector<T>>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
			cout << a[i][j] << ' ';
		cout << en;
	}
}

template <typename T> void input(vector<T>& a)
{
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
}

template<typename T> void input(deque<T>& a)
{
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
}

template<typename T> void input(vector<vector<T>>& a)
{
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a[i].size(); j++)
			cin >> a[i][j];
}

void gg()
{
	cout << "No" << en;
	return;
}

void ok()
{
	cout << "Yes" << en;
	return;
}

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	string t;
	cin >> t;
	vector<int> cnt(26);
	
	for (auto to : s)
		cnt[to - 'a']++;
	
	for (auto to : t)
		cnt[to - 'a']++;

	for (auto to:cnt)
		if (to % 2 != 0)
		{
			gg();
			return;
		}

	vector<pair<int, int>> ans;

	vector<bool> used(n, false);

	for (int i = 0; i < n; i++)
	{
		if (s[i] == t[i])
		{
			used[i] = true;
			continue;
		}

		int idx = -1;

		for (int j =0;j<n;j++)
			if (!used[j] && s[i] == t[j])
			{
				idx = j;
				break;
			}
		
		if (idx == -1)
		{
			for (int j = i+1;j<n;j++)
				if (s[i] == s[j])
				{
					idx = j;
					break;
				}

			used[i] = true;
			swap(t[i], s[idx]);

			ans.pb({ idx + 1,i + 1 });
		}
		else
		{
			
			used[i] = true;
			swap(s[n - 1], t[idx]);
			swap(s[n - 1], t[i]);
			ans.push_back({ n, idx + 1 });
			ans.push_back({ n, i + 1 });
		}

	}

	cout << "Yes" << en;
	cout << ans.size() << en;

	for (auto to : ans)
		cout << to.first << ' ' << to.second << en;

	//cout << s << ' ' << t;


}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif

	int tst = 1;
	cin >> tst;
	while (tst--)
		solve();

}