#include<bits/stdc++.h>
using namespace std;

const int N = 2e6 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int r,p,s;
        cin>>r>>p>>s;
        string q;
        cin>>q;
        int R= 0,P = 0,S = 0;
        for(int i = 0 ; i<q.size() ; ++i)
        {
            R += q[i] == 'R';
            P += q[i] == 'P';
            S += q[i] == 'S';
        }
        int sum = min(r,S) + min(p,R) + min(s,P);
        if(sum >= (n+1)/2)
        {
            printf("YES\n");
            string ans = "";
            for(int i = 0 ; i<n ; ++i)
            {
                if(q[i] == 'R' && p) ans += 'P',p--;
                else if(q[i] == 'P' && s) ans += 'S',s--;
                else if(q[i] == 'S' && r) ans += 'R',r--;
                else ans += '.';
            }
            for(int i = 0 ; i<ans.size() ; ++i) if(ans[i] == '.')
            {
                if(r) ans[i] = 'R',r--;
                else if(s) ans[i] = 'S',s--;
                else ans[i] = 'P', p--;
            }
            printf("%s\n" , ans.c_str());
        }
        else printf("NO\n");

    }
    return 0;
}
