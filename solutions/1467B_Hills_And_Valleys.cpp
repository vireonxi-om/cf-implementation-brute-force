// Problem: Hills And Valleys
// URL: https://codeforces.com/problemset/problem/1467/B
// Rating: 1700
// Tags: brute force, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a[310000], b[310000], sum, del;

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){ scanf("%d", &a[i]); b[i]=0;}
    sum=0; del=0;
    for(int i=2; i<n; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) b[i] = 1;
        else if (a[i] < a[i - 1] && a[i] < a[i + 1]) b[i] = -1;
        if (b[i] != 0) sum++;
    }
    for(int i=2; i<n; i++) {
        int now = a[i], num = 0;
        a[i] = a[i + 1];
        for (int j = i - 1; j <= i + 1; j++) {
            if(j==1 || j==n) continue;
            if (a[j] <= a[j - 1] && a[j] >= a[j + 1] || a[j] >= a[j - 1] && a[j] <= a[j + 1]) {
                if (b[j] != 0) num++;
            }
            if (a[j] < a[j - 1] && a[j] < a[j + 1] || a[j] > a[j - 1] && a[j] > a[j + 1]) {
                if (b[j] == 0) num--;
            }
        }
        del = max(del, num);
        num=0;
        a[i] = a[i - 1];
        for (int j = i - 1; j <= i + 1; j++) {
            if(j==1 || j==n) continue;
            if (a[j] <= a[j - 1] && a[j] >= a[j + 1] || a[j] >= a[j - 1] && a[j] <= a[j + 1]) {
                if (b[j] != 0) num++;
            }
            if (a[j] < a[j - 1] && a[j] < a[j + 1] || a[j] > a[j - 1] && a[j] > a[j + 1]) {
                if (b[j] == 0) num--;
            }
        }
        del = max(del, num);
        a[i] = now;
    }
    sum-=del;
    printf("%d\n", sum);
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


