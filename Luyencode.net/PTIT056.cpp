#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	if(n<2) return 0;
	else
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int tong(int n){
	int a=0,sum=0,b=0;
	while(n){
		int i=n%10;
		sum=sum+i;
		n/=10;
	}
	if(snt(sum))
	return 1;
	return 0;
}
int main (){
    int n;
    scanf("%d",&n);
    if(snt(n)&&tong(n)) printf("YES");
    else printf("NO");
    return 0;
}
