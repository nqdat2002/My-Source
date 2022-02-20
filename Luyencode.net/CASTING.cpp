#include <bits/stdc++.h>
using namespace std;
int timmin(int a,int b,int c){

    int min=a;
    if(b<min)
            min=b;
    if(c<min)
            min=c;
    return min;
}
int main(){

	int k;
	scanf("%d",&k);
	int n,a,b,c;
	scanf("%d%d%d%d",&n,&a,&b,&c);
	if(k==2&&n!=a){
		printf("%d",timmin(a,b,c));
	}
	else if((k==2&&n==a)||(k==1)&&(n==a)){
		printf("%d",n);
	}
	else{
		int x=a+b+c-2*n;
		if(x>0) printf("%d",x);
		else printf("0");
	}
	return 0;
}
