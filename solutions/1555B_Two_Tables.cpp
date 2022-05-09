// Problem: Two Tables
// URL: https://codeforces.com/problemset/problem/1555/B
// Rating: 1300
// Tags: brute force
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = n - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;

const int N = 110000;
const int M = 1100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;

int a, b, c, d, w, h, W, H;

void solve(){
    cin >> W >> H >> a >> b >> c >> d >> w >> h;
    bool can = false;
    int ans = W + H;
    if (c - a + w <= W) {
        can = true;
        ans = min(ans, c - a + w - c);
        ans = min(ans, a - (W - w - (c - a)));
    }
    if (d - b + h <= H) {
        can = true;
        ans = min(ans, d - b + h - d);
        ans = min(ans, b - (H - h - (d - b)));
    }
    if (ans < 0) ans = 0;
    if (!can) ans = -1;
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



