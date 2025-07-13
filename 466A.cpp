/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define nl cout << "\n"

void solve() {
    ll n, m, a, b, ans = INT_MAX;
    cin >> n >> m >> a >> b;
    
    
    ans = min(ans, a*n);
    ans = min(((n/m)+(n%m!=0))*b, ans);
    ans = min(ans, (n/m)*b + (n%m)*a);

    print(ans);
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
