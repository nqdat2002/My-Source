#include<stdio.h>
void giaithua(int n) {
	int a[100000], x=1;
	int i,j;
    long long r=0, q;
    a[0]=1;
    for(i=2; i<=n; i++) {
	    for(j=0; j<x; j++) {
	        q=r;
	        r=(a[j]*i+r)/10;
	        a[j]=(a[j]*i+q)%10; 
	  	}
	    while(r>0) {
	        a[x]=r%10;
	        x++;
	        r=r/10;
	   	}			
	}
	for (i=x-1; i>=0; i--) {
	printf("%d",a[i]);
	}
}
int main() {
	int n,i,X[1000];
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%d",&X[i]);
	}
	for (i=0; i<n; i++) {
    	giaithua(X[i]);
    	printf("\n");
    }
    return 0;
}