/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define nl cout << "\n"

void solve() {
    ll n, k;
    cin >> n >> k;
    
    while(n--) for(int i='a'; i<'a'+k; i++) cout << char(i);
    nl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
