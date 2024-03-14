// Review how binary search is used in this question
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"

void solve() {
    ll n, p, l, t;
    cin >> n >> p >> l >> t;    
    
    ll start = 0, end = n;
    while (start < end) {
        ll mid = (start + end) / 2;
        ll score = min((n+6) / 7, 2*mid)*t + l*mid;
        if (score < p) start = mid + 1; else end = mid;
    }
    printnl(n-start); 
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}