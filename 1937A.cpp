/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define print(a) cout << a << "\n"

void solve() {
    ll n;
    cin >> n;
    
    ll x = 1;
    while (x<=n) x = x*2;
    print(x/2);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
