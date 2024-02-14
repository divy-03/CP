/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define readV(vec) for (auto &e: vec) cin >> e;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    ll sum = accumulate(vec.begin(), vec.end(), 0);

    ll wc=0;
    for (auto &e: vec) {
        if (e > sum/n) wc += e-sum/n;
        else wc = wc - (sum/n-e);
        if (wc < 0) {NO; return;}
    }
    YES;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
