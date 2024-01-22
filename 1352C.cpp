/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";

const int N = 100005;

void solve() {
    ll n, k;
    cin >> n >> k;
    
    ll need = (k-1) / (n-1);
    print(k+need);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
