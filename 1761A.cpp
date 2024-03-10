/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    
    if (n-a-b>=2 || (n==a && b==a)) YES;
    else NO;
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
