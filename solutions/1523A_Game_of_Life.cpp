// Problem: Game of Life
// URL: https://codeforces.com/problemset/problem/1523/A
// Rating: 800
// Tags: implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
char s[1100];

void solve(){
    scanf("%d%d%s", &n, &m, s+1);
    int l=-1;
    for(int i=1; i<=n; i++){
        if(s[i]=='0') continue;
        int len;
        if(l!=-1){
            len=min(m, i-l-1);
            for(int j=1; j<=len; j++){ s[i-j]='1'; s[l+j]='1';}
            if((i-l-1)%2) s[(l+i)/2]='0';
        }
        else{
            len=min(m, i-1);
            for(int j=1; j<=len; j++) s[i-j]='1';
        }
        l=i;
    }
    if(l!=-1){
        int len=min(m, n-l);
        for(int j=1; j<=len; j++) s[l+j]='1';
    }
    s[n+1]='\0';
    printf("%s\n", s+1);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
