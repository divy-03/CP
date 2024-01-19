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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    bool res = false;
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i] and s1[i] != s3[i]) { res = true; }
        if (s1[i] != s3[i] and s2[i] != s3[i]) { res = true; }
    }
    if (res) YES;
    else NO;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}