/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n;
    cin >> n;
    
    ll count = 0;
    vector <ll> res;
    for (int i = 2; i<sqrt(n);i++) {
        if (n%i==0) {n = n/i; res.push_back(i); count++;}
        if (count==2) break;
    }
    res.push_back(n);
    if (count==2) {YES; debug(res);} 
    else NO;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
