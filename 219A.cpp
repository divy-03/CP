#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, a;
    cin >> n;
    string str;
    cin >> str;
    int alpha[26] = {0};

    for (int i = 0; i < str.size(); i++) {
        int a = str[i] - 97;
        alpha[a]++;
    }

    for(int i = 0; i < 26; i++) {
        if(alpha[i] % n != 0) {
            cout << -1;
            return;
        }
    }

    for(int k = 0; k < n; k++) {
        for (int i = 0; i < 26; i++) {
            if(alpha[i] % n == 0){
                a = alpha[i] / n;
                char ch = i + 97;
                for(int j = 0; j < a; j++){
                    cout << ch;
                }
            }
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