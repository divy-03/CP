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
    
    ll s=1, sum=0;
    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        sum += (a-s)%k;
        sum += b-a+1;
        s = b+1;
    }
    print(sum);
}

int main() {
    int t = 1;
    while (t--) solve();
}
