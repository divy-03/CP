#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;
#define nl cout << "\n";
#define YES cout << "YES\n"
#define NO cout << "NO\n"

bool check(ll n) {
    while (true) {
        if (n%2 == 0) {
            n = n/2;
        }
        else break;
    }
    return (n == 1);
}

void solve() {
    ll n;
    cin >> n;

    if (check(n)) print("NO");
    else print("YES");    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}