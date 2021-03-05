// Problem: Notepad#
// URL: https://codeforces.com/problemset/problem/1766/B
// Rating: 1000
// Tags: implementation
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

const int N = 51000;
const int M = 5100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

map<string, int> m; 

void solve() {
    m.clear();
    int n;
    string s;
    cin >> n >> s;
    string pst = "n";
    bool ans = false;
    rep(i, 0, n - 1) {
        string cur = s.substr(i, 2);
        if (m[cur]) ans = true;
        m[pst] = 1;
        pst = cur;
    }
    if (ans) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    IO;
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}



