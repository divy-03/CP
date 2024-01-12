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
    ll n, m;
    cin >> n >> m;

    // print(max(n, m));
    bool a = n%2==0&&m%2==0;
    bool b = n%2!=0&&m%2!=0;
    // printab(a, b);
    if (a||b) print("Bob");
    else print("Alice");
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}