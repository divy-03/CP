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
    string n, k;
    cin >> n >> k;
    
    n.erase(2, 1);
    k.erase(2, 1);
    int a = stoi(n), b = stoi(k);
    // print(b-a);
    int ans;
    if (b-a!=100) ans = a + (b-a)/2;
    else ans = a+30;
    // print(ans);
}

int main() {
    int t = 1;
    while (t--) solve();
}
