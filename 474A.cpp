#include <bits/stdc++.h>
using namespace std;

int main() {
    string dir, str;
    cin >> dir >> str;

    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for (auto &e: str) {
        for (int i = 0; i < a.size(); i++) {
            if (e == a[i] && dir == "L") cout << a[i+1];
            else if (e == a[i] && dir == "R") cout << a[i-1];
        }
    }
}