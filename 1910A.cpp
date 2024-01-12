// Use kotlin to submit
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
    string str;
    cin >> str;

    ll nm, lt;
        
    for (int i = str.size()-1; i >= 0; i--) {
        if (isalpha(str[i-1])) {
            nm = i;
            break; 
        }
    }
    // print(nm);
    for (int i = nm; i < str.size(); i++) {
        if (str[i] != '0'){
            lt = i;
            break;
        }
    }
    // print(str[nm]);
    // print(str[lt]);
    if (str[nm] == '1') {
        for (int i = 0; i < nm; i++) {
            cout << str[i];
        }
    }
    else if (str[nm] == '0') {
        for (int i = 0; i < lt; i++) {
            cout << str[i];
        }
    }
    else {
        for (int i = 0; i <= nm; i++) {
            cout << str[i];
        }
    }
    nl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}