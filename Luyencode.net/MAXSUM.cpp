#include<stdio.h>
#include<stdbool.h>
int main(){
 int t,i;
		int n;
		scanf("%d",&n);
		int a[100000];
		bool ktd=false;
		long long int max;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>0)
			ktd =true;
			if(i==0)
			max=a[0];
			else{
				if(max<a[i])
				max=a[i];
			}
		}
		if(!ktd)
		printf("%lli\n",max);
		else
		{
			long long int sum=0,res=a[0];
			for(i=0;i<n;i++){
				if(sum+a[i]<0)
				{
					sum=0;
					continue;
				}
				sum+=a[i];
					if(res<sum)
			res=sum;
			}
		printf("%lli\n",res);
		}
	return 0;
}
