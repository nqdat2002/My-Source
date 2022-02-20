#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(long long int a,long long int b,long long int c,long long int k){
	long long int x=abs(a-b);
	long long int y=abs(c-b);
	long long int z=abs(a-c);
	if(x<=abs(k)&&y<=abs(k)&&z<=abs(k)) return true;
	else return false;
}
int main(){
	long long int a,b,c,k;
	scanf("%lli%lli%lli%lli",&a,&b,&c,&k);
	if(check(a,b,c,k)==true) printf("Yes");
	else printf("No");
	return 0;
}
