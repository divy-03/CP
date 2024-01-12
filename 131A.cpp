#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;
#define nl cout << "\n";
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    string str;
    cin >> str;
    ll countL = 0;

    for (int i = 0; i < str.size(); i++)  if (str[i] >= 'a') countL++;
    if (countL == 0) for (int i = 0; i < str.size(); i++) str[i] = toupper(str[i]);
    if (countL == 1 && islower(str[0])) {
        str[0] = toupper(str[0]);
        for (int i = 1; i < str.size(); i++) str[i] = tolower(str[i]);
    }
    if (countL == 0) for (int i = 0; i < str.size(); i++) str[i] = tolower(str[i]);
    print(str);
}

int main() {
    solve();
}