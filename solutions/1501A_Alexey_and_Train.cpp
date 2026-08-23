// Problem: Alexey and Train
// URL: https://codeforces.com/problemset/problem/1501/A
// Rating: 800
// Tags: implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a[110], b[110], t[110], d[110];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d %d", &a[i], &b[i]);
        d[i]=a[i]-b[i-1];
    }
    for(int i=1; i<=n; i++) scanf("%d", &t[i]);
    int now=0;
    for(int i=1; i<n; i++){
        now=max(b[i], now+d[i]+t[i]+(b[i]-a[i]+1)/2);
    }
    now+=t[n]+d[n];
    printf("%d\n", now);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (2): minor readability pass on this file — 2026-08-23
