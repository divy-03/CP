#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int x, k;
    cin >> x >> k;
    int a;
    int dig;
    int sum = 0;
    int i = 0;

    do
    {
        a = x + i;
        sum = 0;

        while (a != 0)
        {
            dig = a % 10;
            sum += dig;
            a /= 10;
            // cout << sum << endl;
            
        }
        i++;
    } while (sum % k != 0);

    cout << x+i - 1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}