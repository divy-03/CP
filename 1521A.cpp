#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll a, b;
    cin >> a >> b;

    if (b == 1) NO; 
    else {
        YES;
        cout << a << " " << a*b << " " << a*b+a;
    }
    nl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}