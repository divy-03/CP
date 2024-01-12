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
    ll n, m, sum = 0;
    cin >> n >> m;
    vector <ll> vec(n-1);
    readV(vec);
    if (m==1) {
        YES; return;
    }
    ll i = 0;
    while (i < n-1) {
        if (i+1+vec[i] == m) {
            YES;
            return;
        }
        i += vec[i];
    }
    NO;
}

int main() {
    solve();
}