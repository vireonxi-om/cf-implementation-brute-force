// Problem: Cancel the Trains
// URL: https://codeforces.com/problemset/problem/1453/A
// Rating: 800
// Tags: implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, a[110];

void solve(){
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &m);
    int num, cnt=0;
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        a[num]=1;
    }
    for(int i=0; i<m; i++){
        scanf("%d", &num);
        if(a[num]==1) cnt++;
    }
    printf("%d\n", cnt);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}
// maintenance note (6): note time complexity in this file — 2026-09-02
