// Problem: Easy As ABC
// URL: https://codeforces.com/problemset/problem/1906/A
// Rating: 1000
// Tags: brute force
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repn(i, a, n) for (int i = a; i <= n; i++)
#define per(i, a, n) for (int i = (n) - 1; i >= a; i--)
#define pern(i, a, n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef long double LD;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<int, LL> PIL;
typedef pair<LL, int> PLI;
typedef pair<double, double> PDD;
typedef pair<ull, ull> PUU;
typedef pair<LL, LL> PLL;

const int N = 110000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const LL INF = 1e18;
const double eps = 1e-9;

mt19937_64 Rand((unsigned long long)new char);
#define rand Rand

string s[3], ans = "ZZZ";
int main() {
	IO;
	rep(i, 0, 3) cin >> s[i];
	rep(i1, 0, 3) rep(j1, 0, 3) rep(i2, 0, 3) rep(j2, 0, 3) rep(i3, 0, 3) rep(j3, 0, 3) {
		if (i1 == i2 && j1 == j2) continue;
		if (i1 == i3 && j1 == j3) continue;
		if (i2 == i3 && j2 == j3) continue;
		if (abs(i1 - i2) > 1 || abs(j1 - j2) > 1) continue;
		if (abs(i2 - i3) > 1 || abs(j2 - j3) > 1) continue;
		string t = "";
		t += s[i1][j1], t += s[i2][j2], t += s[i3][j3];
		ans = min(ans, t);
	}
	cout << ans << "\n";
	return 0;
}// maintenance note (5): add editorial link comment to this file — 2026-08-31
