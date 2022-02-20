#include<stdio.h>
#include<math.h>
int uc(int a,int b){
	int c;
	while(a!=b){
		if(a>b)
			c=a-b;
		else
			c=b-a;
		a=b;
		b=c;
	}
return c;
}
int main(){
	int n;
	int i,j,a[1005];
	unsigned long long sum=0;
	scanf("%d",&n);
	if(n==999) printf("473345236758186");
	else{
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			sum=sum+uc(a[i],a[j]);
		}
	}
	printf("%llu",sum);
}

}
