#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;

void solve() {
    ll n;   
    cin >> n;
    int a = 1;
    int i = 1;
    while (true){
        i = i*2;
        a += i;
        if (n%a == 0) {
            cout << n/a << endl;
            return;
        }
    }
    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}