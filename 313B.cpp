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

void solve() {
    string str;
    cin >> str;
    ll m;
    cin >> m;
    vector<ll> pre;

    ll x=0;
    pre.push_back(0);
    for (int i=1; i<str.size(); i++) {
        if (str[i]==str[i-1]) x++;
        pre.push_back(x);
    }
    while (m--) {
        ll a, b;
        cin >> a >> b;
        print(pre[b-1]-pre[a-1]);
    }
}

int main() {
    int t = 1;
    while (t--) solve();
}
