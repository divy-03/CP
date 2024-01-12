#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
            i = i+2;
        } else {
            cout << str[i];
            if(str[i+1] == 'W' && str[i+2] == 'U' && str[i+3] == 'B') cout << " ";
        }
    }
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}