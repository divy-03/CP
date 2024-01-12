#include <bits/stdc++.h>
using namespace std;

// ACCEPTED

void solve()
{
    string s;
    cin >> s;
    int ctl = 0;
    int ctu = 0;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] > 96)
            ctl++;
        else
            ctu++;
    }

    if (ctl >= ctu)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] < 96)
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] > 96)
            {
                s[i] -= 32;
            }
        }
    }

    cout << s;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}