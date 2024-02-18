/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec;
    ll a = 1, b = n;
    for (int i=0; i<n; i++) {
        if (i%2==0) {vec.push_back(b); b = b - 1;}
        else {vec.push_back(a); a = a + 1;}
    }
    debug(vec);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
