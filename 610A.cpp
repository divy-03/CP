/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    ll ans;
    if (n&1) {print(0); return;}
    if ((n/2)%2==0) ans=n/4-1;
    else {
        ll x = n/2;
        ans = x/2;
    }
    ll res = ans>0 ? ans : 0;
    print(res);
}

int main() {
    int t = 1;
    while (t--) solve();
}
