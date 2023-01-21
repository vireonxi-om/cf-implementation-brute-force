// Problem: Do Not Be Distracted!
// URL: https://codeforces.com/problemset/problem/1520/A
// Rating: 800
// Tags: brute force, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, t[30];
char s[60];

void solve(){
    for(int i=0; i<26; i++) t[i]=0;
    scanf("%d%s", &n, s+1);
    t[s[1]-'A']++;
    for(int i=2; i<=n; i++){
        if(s[i]==s[i-1]) continue;
        t[s[i]-'A']++;
    }
    bool can=true;
    for(int i=0; i<26; i++) if(t[i]>1) can=false;
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


