#include <bits/stdc++.h>
using namespace std;

int solve () {
    int n, c, k=1, cnt=0;
    cin >> n >> c;
    
    vector<int> vec(n);
    for (auto &e: vec) cin >> e;
    
    sort(vec.rbegin(), vec.rend());
    
    for (auto &e: vec) {
        if (c/e>=k) {cnt++; k *= 2;}
    }
    return n-cnt;
}

int main() {
    int t; cin >> t;
    while (t--) cout << solve() << "\n";
}