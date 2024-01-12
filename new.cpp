#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

int countSteps(string str)
{
    int n = str.size();
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        count += abs(int(str[i]) - int(str[i + 1])) + 1;
    }
    return count;
}

void solve()
{
    string str;
    cin >> str;

    for (int i = 0; i < 4; i++)
    {
        if (str[i] == '0')
        {
            str[i] = ':';
        }
    }

    int count = str[0] - 48;
    count += countSteps(str);

    printnl(count);
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