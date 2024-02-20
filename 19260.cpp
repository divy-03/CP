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
    string n;
    cin >> n;
    
    ll a=0, b=0;
    for (char ch: n) {
        if (ch=='A') a++;
        else b++;
    }
    char res = a>b ? 'A' : 'B';
    print(res);
    
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
