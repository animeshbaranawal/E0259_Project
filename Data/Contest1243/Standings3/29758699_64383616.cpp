#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e3 + 9 ;
int a[N];
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s , t;
        cin >> s >> t;
        int c= 0;
        vector < int > diff;
        for(int i = 0 ; i < n ; ++i){
            if(s[i]!=t[i]){
                diff.push_back(i);
            }
        }
        if(diff.size() == 0){
            cout << "Yes\n";

        }
        else if(diff.size() == 2 && s[diff[0]] == s[diff[1]] && t[diff[0]] == t[diff[1]]){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }

    }
    return 0;
}
