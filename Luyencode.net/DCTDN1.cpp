#include<stdio.h>
int main(){
	int n;
	int i,j;
	int a[1000];
	scanf("%d",&n);
	int l[1000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	l[0]=1;
	int max;
	for(i=1;i<n;i++){
		max=0;
		for(j=0;j<i;j++){
			if(a[i]>a[j])
				if(l[j]>max)
				max=l[j];
			
		}
		l[i]=max+1;
	}
	int len=0;
	for(i=0;i<n;i++){
		if(l[i]>len)
		len=l[i];
	}
	printf("%d",len);
	return 0; 
}
