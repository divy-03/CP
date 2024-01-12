#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    string n;
    cin >> n;
    int count1 = 1, count0 = 1;
    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < n.size()-1; i++) {
        if(n[i] == '1' && n[i+1] == '1'){
            count1++;
        } else {
            count1 = 1;
        }
        if(n[i] == '0' && n[i+1] == '0'){
            count0++;
        } else {
            count0 = 1;
        }
        ans1 = max(count1, ans1);
        ans2 = max(count0, ans2);
    }

    // cout << ans1 << " " << ans2;
    if(ans1 >= 7 || ans2 >= 7) cout << "YES";
    else cout << "NO";
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}