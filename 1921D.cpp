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

    vector <ll> v1(n);
    vector <ll> v2(m);
    readV(v1);
    readV(v2);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}