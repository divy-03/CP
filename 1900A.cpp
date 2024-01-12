#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0, countW = 0;

    // cout << str << endl;

    for (int i = 0; i < n-2; i++) {
        if(str[i] == '.' && str[i+1] == '.' && str[i+2] == '.') {
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        if(str[i] == '.') countW++;
    }
    // cout << endl;
    if (count) cout << 2 << endl;
    else cout << countW << endl;

    

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}