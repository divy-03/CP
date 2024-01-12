#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    string str;
    cin >> str;

    if(str[0] >= 53 && str[0] != '9') {
        str[0] = 9 - str[0] + '0' + '0';
    }

    for (int i = 1; i < str.size(); i++) {
        if(str[i] >= 53){
            str[i] = 9 - str[i] + '0' + '0';
        }
    }

    cout << str;
}

int main()
{
    solve();
}