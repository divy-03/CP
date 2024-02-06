/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";

void solve() {
    ll n, k;
    cin >> n >> k;
    ll mx = -LONG_LONG_MAX;
    
    while (n--) {
        ll a, b;
        cin >> a >> b;
        if (b > k) mx = max(mx, a-b+k);
        else mx = max(mx, a);
    }
    print(mx);
}

int main() {
    solve();
}
