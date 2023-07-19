// Problem: Colour the Flag
// URL: https://codeforces.com/problemset/problem/1534/A
// Rating: 800
// Tags: brute force, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
char s[60][60];

void solve(){
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) scanf("%s", &s[i]);
    int r=-1, w=-1;
    bool can=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j]=='R'){
                if(r==-1){
                    if(i%2==0) r=j%2;
                    else r=1-(j%2);
                    continue;
                }
                if(i%2==0 && r!=j%2) can=false;
                if(i%2==1 && r==j%2) can=false;
            }
            else if(s[i][j]=='W'){
                if(w==-1){
                    if(i%2==0) w=j%2;
                    else w=1-(j%2);
                }
                if(i%2==0 && w!=j%2) can=false;
                if(i%2==1 && w==j%2) can=false;
            }
        }
    }
    if(r==-1 && w==-1){
        r=0; w=1;
    }
    else if(r==-1) r=1-w;
    else if(w==-1) w=1-r;
    else if(r==w) can=false;
    if(can){
        printf("YES\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i%2==0){
                    if(j%2==r) s[i][j]='R';
                    else s[i][j]='W';
                }
                else{
                    if(j%2==r) s[i][j]='W';
                    else s[i][j]='R';
                }
            }
            printf("%s\n", s[i]);
        }
    }
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
