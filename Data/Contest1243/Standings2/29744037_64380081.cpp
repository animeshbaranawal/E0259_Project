#include <bits/stdc++.h>

using namespace std;



int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int n;
        string s1,s2;
        cin >> n >> s1 >> s2;

        vector <int> v;

        for(int i=0; i<n; i++)
            if(s1[i] != s2[i])
                v.push_back(i);

        if( (v.size() == 0) || (v.size() == 2 && s1[v[0]] == s1[v[1]] && s2[v[1]] == s2[v[0]]) )
            cout << "Yes\n";
        else cout << "No\n";

    }
    return 0;
}
