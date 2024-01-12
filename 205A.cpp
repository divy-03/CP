#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a) cout << a << "\n"

int main() {
    ll n, mn = LLONG_MAX, idx, e, count = 0;
    cin >> n;
    vector <ll> t(n);
    for (int i = 0; i < n; i++) {
        cin >> e;
        t[i] = e;
        mn = min(e, mn);
        if (mn == e) idx = i; 
    }
    for (auto &e: t) {
        if (e == mn) count++;
    }
    if (count > 1) print("Still Rozdil");
    else print(idx+1);
}