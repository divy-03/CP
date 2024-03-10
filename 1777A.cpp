/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    ll cnt1=0, cnt2=0;
    for (int i=0; i<n-1; i++) {
        if (vec[i]&1 && vec[i+1]&1) cnt1++;
        else if (vec[i]%2==0 && vec[i+1]%2==0) cnt2++;
    }
    print(cnt1+cnt2);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
