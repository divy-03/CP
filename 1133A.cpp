/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;

int f(string s){
    return stoi(s.substr(0,2))*60+stoi(s.substr(3,2));
}
int main() {
    string s,t;
    cin>>s>>t;
    int m=(f(s)+f(t))/2;
    printf("%02d:%02d",m/60,m%60);
}
