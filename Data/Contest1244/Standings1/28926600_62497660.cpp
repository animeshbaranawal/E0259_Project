#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#define N 200020
using namespace std;

char s[N], t[N];

int main(void)
{
    int n, k;
    int i, j, l;
    int p, q, t;
    int x;
    bool f;

    // freopen("t.in" , "r", stdin );
    // freopen("t.out", "w", stdout);

    scanf("%d %d", &n, &k);
    scanf("%s", s);

    for(i = 0, f = false; i < n; i ++)
        if(s[(i - 1 + n) % n] != s[i] && s[(i - 2 + n) % n] == s[(i - 1 + n) % n] && s[i] != s[(i + 1) % n])
        {
            f = true;
            for(j = 0; j < n; j ++)
                ::t[j] = s[(i + j) % n];
            for(j = 0; j < n; j ++)
                s[j] = ::t[j];
            x = i;

            break;
        }

    // puts(s);

    if(f)
    {
        for(i = 0; i < n; )
        {
            for(p = i; p + 1 < n && s[p] != s[p + 1]; p ++)
                ;
            -- p;
            for(q = i; q + 1 < n && s[q] == s[q + 1]; q ++)
                ;

            // printf("i = %d, p = %d, q = %d\n", i, p, q);

            if(i < q)
            {
                i = q + 1;
                continue;
            }

            for(l = 0, t = (p - i + 2) >> 1; l < k && l < t; l ++)
                s[i + l] = (i ? s[i - 1] : s[n - 1]), s[p - l] = s[p + 1];
            if(k & 1)
            {
                // printf("t = %d, l = %d\n", t, l);
                for(; l < t; l ++)
                {
                    // printf("%d %d\n", i + l, p - l);
                    s[i + l] = 'B' + 'W' - s[i + l];
                    if(i + l != p - l)
                        s[p - l] = 'B' + 'W' - s[p - l];
                }
            }
            i = p + 1;
        }

        for(i = 0; i < n; i ++)
            ::t[i] = s[(i - x + n) % n];
        for(i = 0; i < n; i ++)
            s[i] = ::t[i];
    }
    else
        if(s[0] != s[1] && (k & 1))
            for(i = 0; i < n; i ++)
                s[i] = 'B' + 'W' - s[i];

    puts(s);

    return 0;
}