#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n, count = 0;
    cin >> n;

    vector <ll> vec(n);
    readV(vec);
    for (int i = 0; i < n-1; i++){
        if (vec[i] < vec[i+1]) count++;
    }
    if (count == 1) {print(0); return;}
    ll a = count%2==0 ? count/2 : count/2+1;
    if (n-1==count && count!=0) {print((count/2)+1);return;}
    print(a);   
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}