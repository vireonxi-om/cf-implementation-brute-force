// Problem: Cut the Triangle
// URL: https://codeforces.com/problemset/problem/1767/A
// Rating: 800
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

const int N = 210000;
const int M = 11000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

PII a[3];

void solve() {
	rep(i, 0, 3) {
		cin >> a[i].fi >> a[i].se;
	}
	bool yes1 = false, yes2 = false;;
	rep(i, 0, 3) {
		rep(j, i + 1, 3) {
			if (a[i].fi == a[j].fi) {
				yes1 = true;
			}
			if (a[i].se == a[j].se) {
				yes2 = true;
			}
		}
	}
	if (yes1 && yes2) cout << "NO\n";
	else cout << "YES\n";
}

int main() {
    IO;
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}




// maintenance note (1): note time complexity in this file — 2026-08-21
