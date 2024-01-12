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
    ll n;
    cin >> n;

    if (n%4!=0&&n%6!=0) {
        print(-1);
        return;
    }
    ll a = n%6==0?n/6:n/6+1;
    ll b = n%4==0?n/4:n/4+1;
    printab(a, b);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}