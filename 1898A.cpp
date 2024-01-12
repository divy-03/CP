#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int countA = 0, countB = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            countA++;
        else
            countB++;
    }

    if (countB == k)
    {
        cout << 0 << endl;
        return;
    }

    if (countB < k)
    {
        int i = 0;
        while (countB != k)
        {
            if (str[i] == 'A')
            {
                str[i] = 'B';
                countB++;
            }
            i++;
        }
        cout << 1 << endl;
        printab(i, 'B');
    }
    else
    {
        int i = 0;
        while (countB != k)
        {
            if(str[i] == 'B'){
                str[i] = 'A';
                countB--;
            }
            i++;
        }
        cout << 1 << endl;
        printab(i, 'A');
    }
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