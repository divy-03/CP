#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    int ped[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ped[i];
    }
    cin >> m;
    int rear[m];
    for (int i = 0; i < m; i++)
    {
        cin >> rear[i];
    }
    if (m > n)
    {
        int ans[m] = {0};
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (rear[j] % ped[i] == 0)
                {
                    ans[i] = rear[j] / ped[i];
                }
            }
            // cout << endl;
        }

        int max = ans[0]; // Assume the first element is the maximum

        for (int i = 1; i < m; i++)
        {
            if (ans[i] > max)
            {
                max = ans[i]; // Update max if a larger element is found
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (max == ans[i])
            {
                count++;
            }
            // cout << ans[i] << " ";
        }

        cout << count;
    }
    else
    {
        int ans[n] = {0};
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (rear[j] % ped[i] == 0)
                {
                    ans[i] = rear[j] / ped[i];
                }
            }
            // cout << endl;
        }

        int max = ans[0]; // Assume the first element is the maximum

        for (int i = 1; i < n; i++)
        {
            if (ans[i] > max)
            {
                max = ans[i]; // Update max if a larger element is found
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (max == ans[i])
            {
                count++;
            }
            // cout << ans[i] << " ";
        }

        cout << count;
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