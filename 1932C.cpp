/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define readV(vec) for (auto &e: vec) cin >> e;
#define nl cout << "\n"

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n); readV(a);
    string s; cin >> s;

    vector<ll> b;
    ll cr = 1, cl = 0;
    for (char ch: s) {
        if (ch == 'R') {b.push_back(a[n-cr]); cr++;}
        else {b.push_back(a[cl]); cl++;}
    }
    ll pro = 1;
    vector <ll> c;
    for (int i=b.size()-1; i>=0; i--) {
        pro *= (b[i]%m);
        pro %= m;
        c.push_back(pro);
    }
    for (int i = c.size()-1; i>=0; i--) cout << c[i] << " "; nl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
