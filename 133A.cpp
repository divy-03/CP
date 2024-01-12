#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    string str;
    cin >> str;

    int n = str.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            count++;
            // cout<<i;
        }
    }

    count ? cout << "YES" : cout << "NO";
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}