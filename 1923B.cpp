#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define readV(vec) for (auto &e: vec) cin >> e;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(n), b(n);
    readV(a);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int y = abs(x);
        b[y-1] += a[i];
    }

    partial_sum(b.begin(), b.end(), b.begin());
    vector <ll> c(n);
    for (int i = 0; i<n; i++) {
        c[i] = (i+1)*k;
    }
    for (int i = 0; i<n; i++) {
        if (b[i]>c[i]) {NO; return;}
    }
    YES;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
