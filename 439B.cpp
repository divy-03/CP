#include <bits/stdc++.h>
using namespace std;


void solve()
{
    long long n, m; // no of chapters and hours
    cin >> n >> m;
    long long a;
    long long forSum = 0;
    vector<long long> chapters(n);

    for (int i = 0; i < n; i++)
    {
        cin >> chapters[i];
    }

    sort(chapters.begin(), chapters.end());

    for (int i = 0; i < n; i++)
    {
        a = m * chapters[i];
        forSum += a;
        if (m != 1)
        {
            m--;
        }
    }

    cout << forSum << "\n";
    // printnl(forSum);
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}