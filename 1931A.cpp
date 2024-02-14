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
    
    string s = "";
    if (n<=78 && n>52) {
        cout << char(n-52+96);
        cout << "zz";
    }
    if (n<=52 && n>=29) {
        cout << 'a';
        cout << char(n-26+95);
        cout << 'z';
    }
    if (n<29) {
        cout << "aa";
        cout << char(n+96-2);
    }
    nl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
