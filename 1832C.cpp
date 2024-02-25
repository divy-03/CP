/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
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
    
    vector<ll> vec(n); readV(vec);
    ll cnt=0;
    for (int i = 1; i<n; i++) cnt += abs(vec[i-1] - vec[i]); 
    
    sort(vec.begin(), vec.end());
    
    if (n == 1 || cnt == 0) {print(1); return;}
    if (n == 2) {print(2); return;}

    ll i=0, cnt2=0;
    while (cnt2<cnt) {
        cnt2 += vec[n-1-i] - vec[i];
        i++;
    }
    print(i+1);
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
