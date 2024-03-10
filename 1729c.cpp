/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"

string removeDuplicates(const string& str) {
    unordered_set<char> uniqueChars;
    string result;

    for (char ch : str) {
        if (uniqueChars.find(ch) == uniqueChars.end()) {
            result += ch;
            uniqueChars.insert(ch);
        }
    }
    return result;
}

int countSpaces(const string& str) {
    ll count = 0;
    for (char ch : str) if (ch == ' ') count++;
    return count;
}

void solve() {
    string s;
    cin >> s;
    
    string og = s;
    if (s[0] < s[s.size()-1]) sort(s.begin(), s.end());
    else sort(s.rbegin(), s.rend());
    
    cout << abs((int)og[og.size()-1] - (int)og[0]) << " ";
    map <char, string> mp;
    for (int i=0; i<og.size(); i++) {
        mp[og[i]] += to_string(i+1) + " ";
    }
    s = removeDuplicates(s);
    string ans = "";
    for (char ch: s) {
        if (s[0]<s[s.size()-1] && ch>=og[0] && ch<=og[og.size()-1]) ans += mp[ch];
        else if (ch>=og[og.size()-1] && ch<=og[0]) ans += mp[ch];
    }
    ans.erase(ans.size()-1);
    print(countSpaces(ans)+1);
    print(ans);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
