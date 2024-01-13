#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int a, b;
    cin >> a >> b;
    int xK, yK;
    cin >> xK >> yK;
    int xQ, yQ;
    cin >> xQ >> yQ;
    vector<int> dx = {a, a, -a, -a, b, b, -b, -b};
    vector<int> dy = {b, -b, b, -b, a, -a, a, -a};
    int ans = 0;
    for (int j = 0; j < 8; j++){
      for (int k = 0; k < 8; k++){
        if (xK + dx[j] == xQ + dx[k] && yK + dy[j] == yQ + dy[k]){
            ans++;
        }
      }
    }
    // if a == b or ans%4 == 0
    if (ans%4==0){
      ans /= 4;
    }
    cout << ans << endl;
  }
}