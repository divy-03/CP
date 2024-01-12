#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;

int solve() {
    ll n, m;
    cin >> n >> m;
    
    ll mn = n%2==0?n/2:(n/2)+1;
    ll mx = n;
    for (int i = mn; i <= mx; i++) {
        if (i%m==0) return i;
    }
    return -1;
}

int main() {
    cout << solve();
}