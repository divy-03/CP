#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{

    ll n, m, a;
    cin >> n >> m;
    ll count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > m) count++;
        count++;
    }
    cout << count;
}

int main()
{
    solve();
}