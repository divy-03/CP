#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    string str;
    cin >> str;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    int n = str.size();

    if (n == 1)
        cout << str;

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
                count1++;
            else if (str[i] == '2')
                count2++;
            else if (str[i] == '3')
                count3++;
        }

        while (count1-- && n--)
        {
            cout << "1";
            if (n != 0)
                cout << "+";
            n--;
        }

        while (count2-- && n--)
        {
            cout << "2";
            if (n != 0)
                cout << "+";
            n--;
        }

        while (count3-- && n--)
        {
            cout << "3";
            if (n != 0)
                cout << "+";
            n--;
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