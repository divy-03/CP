#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int x = s1.size();
    int y = s2.size();
    int z = s3.size();

    int sm = 0;

    int mn = x < y ? x < z ? x : z : y;

    if (s1[0] != s2[0] || s2[0] != s3[0] || s1[0] != s3[0])
    {
        return -1;
    }

    for (int i = 0; i < mn; i++)
    {
        if (s1[i] == s2[i] && s2[i] == s3[i])
        {
            sm++;
            cout << s1[i];
        }else {
            break;
        }
    }
    // cout << sm;
    // cout << x << y << z;
    int ans = 0;
    ans = x - sm + y - sm + z - sm;

    // cout << ans;

    return 0;
}