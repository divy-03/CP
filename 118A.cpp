#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    string str;
    cin >> str;

    for (char &c : str)
    {
        c = tolower(c);
    }

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
            continue;
        } else {
            cout << "." << str[i];
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