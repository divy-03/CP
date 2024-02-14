/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    ll sum = accumulate(vec.begin(), vec.end(), 0);

    ll wc=0;
    bool res = true;
    for (auto &e: vec) {
        if (e > sum/n) wc += e-sum/n;
        else wc = wc - (sum/n-e);
        if (wc < 0) res=false;
    }
    if (res) YES;
    else NO;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
