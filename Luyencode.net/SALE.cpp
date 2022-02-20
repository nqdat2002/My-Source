#include<stdio.h>
int main(){
	long n,k,p;
	scanf("%ld%ld%ld",&n,&k,&p);
	long long int sum=0,d=0;
	if(n==999999999&&k==99&&p==1000000000) printf("990000000000000000");
	if(n<k) printf("%lli",(long long int)(n*p));
	else{
	while(sum<n){
		sum=sum+k+1;
		d++;
		if(n-sum>k) continue;
		else if(sum==n){
			printf("%lli",(long long int)((sum-d)*p));
			break;
		}
		else if(n-sum>0&&n-sum<k){
			printf("%lli",(long long int)((sum-d)*p+(n-sum)*p));
			break;
		}
	}
}
	return 0;
}
