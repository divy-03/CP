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
    ll n;
    cin >> n;
    
    vector<ll> vec(n);
    ll ie, is;
    for (int i = 0; i<n; i++) {
        int a;
        cin >> a;
        if (a==1) ie = i;
        vec[i]=a;
    }
    for (int i=0; i<n; i++) if (vec[i]==1) {is=i; break;}
    ll cnt=0;
    for (int i = is; i<ie; i++) if (vec[i]==0) cnt++;
    print(cnt);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
