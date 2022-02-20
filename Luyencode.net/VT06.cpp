#include<bits/stdc++.h>
// code cua datvp1234
using namespace std;
int main(){
long n;
long dem=0;
long a[10000];
double tb;
cin>>n;
for(int i=1;i<=n;i++){
cin>>a[i];
}
for(long i=1;i<=n;i++){
if(a[i]!=0){
if(a[i]%2!=0){
dem++;
tb+=a[i];}}
}
tb=tb/dem;
cout<<setprecision(4)<<fixed<<tb;
}