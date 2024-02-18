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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n); readV(a);
    string s; cin >> s;

    vector<ll> b;
    ll cr = 1, cl = 0;
    for (char ch: s) {
        if (ch == 'R') {
            b.push_back(a[n-cr]);
            cr++;
        }
        else {
            b.push_back(a[cl]);
            cl++;
        }
    }
    ll pro = 1;
    vector <ll> c;
    for (int i=b.size()-1; i>=0; i--) {
        pro = pro * (b[i]%m);
        c.push_back(pro%m);
    }
    for (int i = c.size()-1; i>=0; i--) cout << abs(c[i]) << " ";
    nl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
