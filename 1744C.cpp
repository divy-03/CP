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
    ll n;
    string t;
    char l;
    cin >> n >> l >> t;
    if (l=='g') {print(0); return;}
    int mx = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (t[i]==l && t[j]=='g') {
                mx = max(mx, j-i);
                i=j;
            }
        }
    }
    int x, y;
    for (int i=n-1; i>=0; i--) if (t[i]==l) {x=i;break;}
    for (int i=n-1; i>=0; i--) if (t[i]=='g') {y=i; break;}
    for (int i=0; i<n; i++) if (t[i]=='g') {x=x>y?abs(n-x+i):0; break;}
    print(max(mx, x));
    // print(x);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}