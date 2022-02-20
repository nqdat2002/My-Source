#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll conP(ll ppre, ll nl){
    ll front = ppre;
    ll back = 0;
    if(nl & 1 ) ppre/=10;
    while(ppre){
        ll digit = ppre%10;
        ppre/=10;
        back = back * 10 +digit;
        front *=10;
    }
    return front + back;
}
ll np(ll n ){
    ll nl = 0 ;
    ll pl = 0;
    ll ppre = 0 ;
    ll t = 0 ;
    ll i = 0;
    for(nl = 0 ,t = n ; t != 0 ; t /=10){
        nl++;
    }
    pl = (nl + 1) /2;
    ppre = n;
    for(i =0 ; i < nl - pl ;i++) ppre /=10;
    if(conP(ppre, nl) > n) ppre--;
    ppre *= 2;
    if(nl & 1 ){
        ll adj = 1;
        for(i = 1; i<pl;i++){
            adj*=10;
        }
        ppre -=(ppre / 2 -adj+1);
    }
	else{
        ll ajd = 1;
        for(i =0 ; i < pl;i++){
            ajd*=10;
        }
        ppre += (ajd-1-ppre/2);
    }
    return ppre;
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll  a,b;
    while(cin >> a >> b){
        cout << np(b) - np(a-1) << "\n";
    }
    return 0;
}
