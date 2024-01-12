#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

int64_t solve()
{
    int n;
    cin >> n;
    int x, y;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (y - x > 1) count++;
    }

    return count;
}

int main()
{
    cout << solve();
}