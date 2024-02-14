#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    string arr[8], str;
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    int countR = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            str = arr[i];
            if (j == 0) countR = 0;
            if (str[j] == 'R') countR++;
            
        }
        if (countR == 8) {
            cout << 'R' << endl;
            return;
        }
    }
    cout << 'B' << endl;
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