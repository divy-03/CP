#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    int n;
    cin >> n;
    string arr[n];
    int countA = 1;
    int countB = 0;
    int b = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string ele = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == ele)
            countA++;
        else
        {
            b = i;
            countB++;
        }
    }

    if (max(countA, countB) == countA)
        cout << arr[0];
    else
        cout << arr[b];
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}