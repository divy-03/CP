#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

int main()
{
    ll n;
    cin >> n;

    // If n is even, then the answer is n/2, otherwise the answer is (n-1)/2 - n = -(n + 1)/2.
    if (n&1) printnl((n-1)/2 - n);
    else printnl(n/2);
}