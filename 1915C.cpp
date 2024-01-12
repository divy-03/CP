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
    ll a;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    double b = sqrt(sum);
    ll c = b;
    if (b==c) YES;
    else NO;    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}