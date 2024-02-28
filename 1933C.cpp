/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll a, b, l;
    cin >> a >> b >> l;
    
    ll l1=l, l2=l;
    ll ca=0, cb=0;
    while (l1%a==0) {
        l1 = l1/a;
        ca++;
    }
    while (l2%b==0) {
        l2 = l2/b;
        cb++;
    }
    // printab(ca, cb);
    if (a==b) {print(ca+1); return;}
    if (__gcd(a, b)!=1) 
    print((ca+1)*(cb+1));
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
