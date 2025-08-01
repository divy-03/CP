/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

const int N = 100005;

void solve() {
  int n;
  cin >> n;
  vector<string> strs(n); readV(strs);
    
  string ans = "";
    int count = 0;
    sort(strs.begin(), strs.end());
    for (int j = 0; j<strs[0].size();  j++) {
      for (int i = 0; i<strs.size(); i++) {
        if (strs[0][j] == strs[i][j]) {
          count++;
        }
      }
      cout << count << " ";
      if (count == strs.size()) ans += strs[0][j];
      else break;
      count = 0;
    }
    print(ans);
}

int main() {
  solve();
}
