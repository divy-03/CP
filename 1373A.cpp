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

    if (a<c) cout << 1 << " ";
    else cout << -1 << " ";
    if (a*b>c) print(b);
    else print(-1);

    if (a >= c) {
        printab(-1, b);
    } else {
        if (a*b<=c) printab(1, -1);
        else printab(1, b);
    }
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}