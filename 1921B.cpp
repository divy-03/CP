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
    string s1, s2;
    cin >> s1 >> s2;

    ll c11 = 0, c21 = 0, c = 0;
    for (auto ch: s1) {
        if (ch == '1') c11++;
    }
    for (auto ch: s2) {
        if (ch == '1') c21++;
    }

    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i] && s1[i]=='1') c++;
    }
    ll x, y;
    x = c21 - c;
    if (c11 > c21) print(c11-c);
    else print(x);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}