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
    ll idx;
    string str;
    cin >> str;
    string str1 = "", str2 = "";
    str1 += str[0];

    for (int i = 1; i < str.size(); i++){
        if (str[i] == '0') {
            str1 += str[i];
        } else {
            idx = i;
            break;
        }
    }
    for (int i = idx; i < str.size(); i++) {
        str2 += str[i];
    }

    if (str1 == str2 || str2 == "" || stoi(str1) > stoi(str2)) print(-1);
    else printab(str1, str2);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}