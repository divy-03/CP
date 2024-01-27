/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";

void solve() {
    ll n, k;
    cin >> n >> k;

    for (int i=n/k; i>1; i--) {if (n%i==0) {print(i); return;}}
    print(1);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
