/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"

int solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    if (b>c) return 1;
    if (b>a) return 1;
    return a%b==0 ? a/b : a/b+1;
}

int main() {
    // fastio;
    int t = 1;
    cin >> t;
    while (t--) print(solve());
}
