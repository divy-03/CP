#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n, k;
    cin >> n >> k;
 
    vector<ll> arr(n);
    readV(arr);
 
    ll mult = 1;
    for (int i=0; i<n; i++) {
        mult *= arr[i];
    }
 
    if (2023%mult != 0) NO;
    else {
        YES;
        cout << 2023/mult << " ";
        for (int i=1; i<k; i++) {
            cout << "1" << " ";
        }
        cout << "\n";
    }
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}
