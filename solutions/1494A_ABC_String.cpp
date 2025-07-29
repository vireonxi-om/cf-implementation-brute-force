// Problem: ABC String
// URL: https://codeforces.com/problemset/problem/1494/A
// Rating: 900
// Tags: bitmasks, brute force, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
char s[100];

void solve(){
    scanf("%s", s+1);
    n=strlen(s+1);
    bool can=true;
    int a, b, c;
    a=s[1]-'A'; c=s[n]-'A';
    if(c==a) can=false;
    if(can){
        for(int i=2; i<=n; i++){
            if(s[i]-'A'!=a && s[i]-'A'!=c){
                b=s[i]-'A'; break;
            }
        }
        bool yes1=true, yes2=true;
        int cnt1=0, cnt2=0;
        for(int i=1; i<=n; i++){
            int t=s[i]-'A';
            if(t==a || t==b) cnt1++;
            else cnt2++;
            if(cnt2>cnt1) yes1=false;
        }
        if(cnt1!=cnt2) yes1=false;
        cnt1=0, cnt2=0;
        for(int i=1; i<=n; i++){
            int t=s[i]-'A';
            if(t==a) cnt1++;
            else cnt2++;
            if(cnt2>cnt1) yes2=false;
        }
        if(cnt1!=cnt2) yes2=false;
        if(yes1==false && yes2==false) can=false;
    }
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



