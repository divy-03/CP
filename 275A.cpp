#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout  e;
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    vector <ll> l(9);

    for (auto &light : l) cin >> light;

    vector <ll> b(9);
    b[0] = l[0] + l[1] + l[3];
    b[1] = l[0] + l[1] + l[2] + l[4];
    b[2] = l[2] + l[5] + l[1];
    b[3] = l[0] + l[3] + l[6] + l[4];
    b[4] = l[1] + l[3] + l[4] + l[5] + l[7];
    b[5] = l[5] + l[2] + l[4] + l[8];
    b[6] = l[6] + l[3] + l[7];
    b[7] = l[7] + l[6] + l[4] + l[8];
    b[8] = l[8] + l[5] + l[7];


    for (int i = 0; i < 9; i++) {
        if (b[i]%2 == 0) cout << 1;
        else cout << 0;
        if ((i+1)%3 == 0) nl; 
    }
}

int main() {
    solve();
}