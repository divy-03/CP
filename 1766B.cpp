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

bool areAnySubstringsSame(const std::string& s) {
    size_t pos1 = s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    size_t pos2 = s.find_last_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    return pos1 != std::string::npos && pos2 != std::string::npos && pos1 != pos2 && (pos2 - pos1) >= 2;
}

void solve() {
    ll n;
    cin >> n;
    string str;
    cin >> str;

    vector <ll> alpha(26);
    for (auto &ch: str) {
        int a = ch-'a';
        alpha[a]++;
    }
    // debug(alpha);
    
    bool result = areAnySubstringsSame(str);

    // cout << boolalpha << result << endl;
    if (result) YES;
    else NO;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}