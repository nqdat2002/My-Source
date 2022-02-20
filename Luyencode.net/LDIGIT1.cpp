#include<stdio.h>
int a[5]={1,1,2,6,4};
unsigned long long mu(unsigned long long n){
	unsigned long long x;
	if(n%4==0) x=6;
	else if(n%4==1) x=2;
	else if(n%4==2) x=4;
	else if(n%4==3) x=8;
	return x;
}
int tim(unsigned long long n){
	unsigned long long b=n%10;
	return b;
}
unsigned long long cstc(unsigned long long n){
	unsigned long long s;
	s=((mu((unsigned long long )n/5))*tim((unsigned long long )n/5)*a[n%5])%10;
	return s;
}
int main(){
	int a;
	scanf("%d",&a);
	if(a==0) printf("1");
	else if(a==1) printf("1");
	else if(a>1){
		printf("%llu",(unsigned long long)cstc(a));
	}
}
#include<bits/stdc++.h>
using namespace std;
int fact (long long n) {
    long long a[500000], m=1;
    long long r=0, q;
    a[0]=1;
    for (int i=2; i<=n; ++i) {
        for (int j=0; j<m; ++j) {
            q = r;
            r = (a[j]*i+r)/10;
            a[j] = (a[j]*i+q)%10;
        }
        while (r>0) {
            a[m] = r%10;
            ++m;
            r /= 10;
        }
    }
  	long long z;
    for (int i=0; i<m; ++i) {
        if (a[i]!=0) {
            z=a[i];
            break;
        }
    }
    return z;
}
int main() {
    long long n;
    cin >> n;
    cout << fact(n);
    return 0;
}
