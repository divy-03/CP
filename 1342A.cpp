/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"

void solve() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    
    ll cost = 0;
    if (x*y>0) {x = abs(x); y = abs(y);}
    if (x*y > 0 && 2*a>b) {
        ll mn = min(x, y);
        cost += mn*b; 
        x-= mn; y -= mn;
    }
    cost += (x+y)*a;
    print(cost);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
