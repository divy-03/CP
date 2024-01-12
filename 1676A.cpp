#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a;
    int count = 0;
    int sumF = 0;
    int sumL = 0;

    while (n != 0)
    {
        a = n % 10;
        n /= 10;
        count++;
        if(count <4) sumF += a;
        else sumL+= a;
    }

    if (sumF == sumL) cout << "YES" << endl;
    else cout << "NO" << endl;
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