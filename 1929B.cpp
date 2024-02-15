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

int solve() {
    ll n, k;
    cin >> n >> k;
    
    if (k == 4*n - 2 || k&1) {return k/2 + 1;}
    else return k/2;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) cout << solve() << "\n";
}
