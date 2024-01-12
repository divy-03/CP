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

    while (n>20210) {
        n = n-2021*10;
    }
    while (n%10!=0 && n>0) {
        n = n-2021;
    }
    while (n>=2020) {
        n = n-2020;
    }
    if (n) NO;
    else YES;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}