#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void subtractSubstring(string &mainStr, const string &subStr)
{
    size_t pos = mainStr.find(subStr);
    while (pos != string::npos)
    {
        mainStr.replace(pos, subStr.length(), string(subStr.length(), '0'));
        pos = mainStr.find(subStr);
    }
}

void solve()
{
    int n;
    cin >> n;
    string no = to_string(n);

    // cout << no;

    string a = "1";
    string b = "14";
    string c = "144";

    subtractSubstring(no, c);

    subtractSubstring(no, b);

    subtractSubstring(no, a);

    int count = 0;

    for (int i = 0; i < no.size(); i++) {
        if(no[i] == '0') count++;
    }

    if (count == no.size()) cout << "YES";
    else cout << "NO";

}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}
