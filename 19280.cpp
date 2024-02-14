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
    ll a, b;
    cin >> a >> b;
    bool bul = false;
    
    if (a%2==0 && a/2!=b) {bul=true;} 
    if (b%2==0 && b/2!=a) {bul=true;}
    if (a%2 && b%2) bul=false;
    if (bul) YES; else NO;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
