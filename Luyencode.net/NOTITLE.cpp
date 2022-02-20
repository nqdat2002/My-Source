#include<stdio.h>
#include<math.h>
int tong(long long int n)
{
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
		}
	return s;
}
int tach(long long int n){
	if(n%10!=0) return 0;
	return 1;
	
}
int main(){
	long long int n;
	scanf("%lli",&n);
	if(tach(n)&&tong(n)%3==0)
	printf("1");
	else printf("0");
}
