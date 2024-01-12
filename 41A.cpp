#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

bool solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[n - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    bool ans = solve();
    if(ans) cout << "YES";
    else cout << "NO";
}