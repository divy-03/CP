#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &e: vec) cin >> e;
    
    int s = 0, e = n-1;
    bool big = true;
    while (s<e) {
        if (big) {
            if (vec[s]>vec[e]) {cout << 'L'; s++;}
            else {cout << 'R'; e--;}
            big = false;
        } else {
            if (vec[s]<vec[e]) {cout << 'L'; s++;}
            else {cout << 'R'; e--;}
            big = true;
        }
    }
    cout << "L\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}