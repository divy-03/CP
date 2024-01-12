#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

int digits(int n) {
    int count = 0;
    n = abs(n);
    do {
        n /= 10;
        count++;
    } while (n != 0);
    return count;
}

bool checkLucky(int n) {
    int a;
    while(n) {
        a = n%10;
        n /= 10;
        if (a != 4 && a != 7) {
            return false;
        }
    }
    return true;
}


void solve()
{
    int n;
    cin >> n;
    int d = digits(n);

    if (checkLucky(n)) cout << "YES";
    else {
        if (n%4 == 0 || n%7 == 0) {
            cout << "YES";
            return;
        }
        
        for (int i = 2; i < 1000; i++){
            if(i != 4 && i != 7 &&n%i == 0) {
                n = n/i;
                if(checkLucky(n)){
                    cout <<"YES";
                    return;
                }
            }
        }
        cout << "NO";
    }

}

int main()
{
    solve();
}