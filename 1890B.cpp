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
    ll n, k;
    cin >> n >> k;
    
    string a, b; cin >> a >> b;
    vector<ll> cnt(2);
    vector<ll> cntb(2);
    
    for (int i=0; i<n-1; i++) {
        if (a[i]=='0' && a[i+1]=='0') cnt[0]++;
        else if (a[i]=='1' && a[i+1]=='1') cnt[1]++;
    }
    for (int i=0; i<k-1; i++) {
        if (b[i]=='0' && b[i+1]=='0') cntb[0]++;
        else if (b[i]=='1' && b[i+1]=='1') cntb[1]++;
    }
    if (cntb[0]!=0 || cntb[1]!=0) {NO; return;}
    if (cnt[0]==0 && b[0]=='0' && b[k-1]=='0') {YES; return;}
    if (cnt[1]==0 && b[0]=='1' && b[k-1]=='1') {YES; return;}
    NO;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
