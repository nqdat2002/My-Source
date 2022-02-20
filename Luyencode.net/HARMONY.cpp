#include<stdio.h>
#include<math.h>
int tim(int m,int n){
	int max=m;
	if(n>max) max=n;
	else if(n==max) max=n;
	return max;
}
int main() {
	int t,n,i,a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int max=1,dem=1;
		for(i=1;i<n;i++)
			if(abs(a[i]-a[i-1])==1)
				dem++;
			else
			{
				max=tim(max,dem);
				dem=1;
			}
		max=tim(max,dem);
		if(max>n/2) printf("Yes\n");
		else printf("No\n");
	}
}
