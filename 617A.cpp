#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

int solve()
{
    int n;
    cin >> n;

    int ans = n % 5 == 0 ? n / 5 : n / 5 + 1;
    return ans;
}

int main()
{
    cout << solve();
}