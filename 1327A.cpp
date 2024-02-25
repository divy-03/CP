/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n, k;
    cin >> n >> k;
    
    if ((n+k)&1) {NO; return;}
    if (n<k*k) {NO; return;}
    YES;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
