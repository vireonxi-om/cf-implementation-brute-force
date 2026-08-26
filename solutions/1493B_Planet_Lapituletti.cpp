// Problem: Planet Lapituletti
// URL: https://codeforces.com/problemset/problem/1493/B
// Rating: 1300
// Tags: brute force, implementation
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int h, m, h1, m1;
char s[5];

void solve(){
    scanf("%d%d%s", &h, &m, &s);
    h1=(s[0]-'0')*10+(s[1]-'0');
    m1=(s[3]-'0')*10+(s[4]-'0');
    int h2, m2;
    int ansh, ansm;
    for(int i=0; i<=100000; i++){
        ansm=m1+i; ansh=h1+ansm/m;
        ansm%=m; ansh%=h;
        int a=ansm%10, b=(ansm%100-ansm%10)/10, c=ansh%10, d=(ansh%100-ansh%10)/10;
        h2=0, m2=0;
        bool can=true;
        if(a==0) h2+=0;
        else if(a==1) h2+=10;
        else if(a==2) h2+=50;
        else if(a==5) h2+=20;
        else if(a==8) h2+=80;
        else can=false;
        if(c==0) m2+=0;
        else if(c==1) m2+=10;
        else if(c==2) m2+=50;
        else if(c==5) m2+=20;
        else if(c==8) m2+=80;
        else can=false;
        if(b==0) h2+=0;
        else if(b==1) h2+=1;
        else if(b==2) h2+=5;
        else if(b==5) h2+=2;
        else if(b==8) h2+=8;
        else can=false;
        if(d==0) m2+=0;
        else if(d==1) m2+=1;
        else if(d==2) m2+=5;
        else if(d==5) m2+=2;
        else if(d==8) m2+=8;
        else can=false;
        if(h2>=h || m2>=m) can=false;
        if(can) break;
    }
    if(ansh<10) printf("0"); printf("%d:", ansh);
    if(ansm<10) printf("0"); printf("%d\n", ansm);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (3): add editorial link comment to this file — 2026-08-26
