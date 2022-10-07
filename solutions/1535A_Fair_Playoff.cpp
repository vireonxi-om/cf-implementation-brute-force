// Problem: Fair Playoff
// URL: https://codeforces.com/problemset/problem/1535/A
// Rating: 800
// Tags: brute force, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m1, m2, n1, n2;

void solve(){
    scanf("%d%d%d%d", &m1, &n1, &m2, &n2);
    if(m1<n1) swap(m1, n1);
    if(m2<n2) swap(m2, n2);
    if(m2>n1 && m1>n2) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


