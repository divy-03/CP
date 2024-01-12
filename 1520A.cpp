#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char c = 'A'; c <= 'Z'; c++)
    {
        int first = n;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++)
        {
            if (s[i] != c) // if any other letter found between two same characters it returns NO
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--) solve();
}