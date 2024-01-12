#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;
#define nl cout << "\n";
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    string str;
    cin >> str;

    int n = str[1] - 48;
    char a = str[0];

    for (int i = 1; i <= 8; i++) {
        if (i != n) cout << a << i << "\n";
    }
    for (int i = 'a'; i <= 'h'; i++) {
        if (i != a) cout << char(i) << n << "\n";
    }

    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}