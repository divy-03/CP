/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"

void solve() {
    ll a, b, count = 0;
    cin >> a >> b;
    
    for (int i = a; i<=b; i++) if (i&1) count++;
    print(count/2);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
