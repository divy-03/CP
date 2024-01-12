#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"

void solve() {
    ll n, m;
    cin >> n >> m;

 
    ll l = lcm(n, m);
 
    if (l == m) print(l*(m/n));
    else print(l);
}


int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}