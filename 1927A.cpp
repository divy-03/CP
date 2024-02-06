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
    
    string s; cin >> s;
    int i1, i2;
    for (int i=0; i<n; i++) {
        if (s[i] == 'B') {i1 = i; break;}
    }
    for (int i=0; i<n; i++) if (s[i]=='B') {i2=i;}
    print(i2-i1+1);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
