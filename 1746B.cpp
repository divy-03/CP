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
    ll n;
    cin >> n;
    
    vector<ll> vec(n);
    ll idx=0, cnt1=0, cnt2=0, cnt0=0;
    for (int i=0; i<n; i++) {
        int a; cin >> a; vec[i]=a;
        if (a==1) {idx = i; cnt1++;}
    }
    for (int i=idx; i>=0; i--) {
        if (vec[i]==0) break;
        cnt2++;
    }
    for (int i=idx; i<n; i++) cnt0++;
    if ((cnt1-cnt2) >= cnt0) print(cnt1-cnt2);
    else print(cnt0);
    // printab(cnt1, cnt2);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
