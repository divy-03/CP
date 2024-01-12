#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    if (a == b) print(c);
    else if (b == c) print(a);
    else print(b);

    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}