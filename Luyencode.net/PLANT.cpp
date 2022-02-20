#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	int n,j;
	while(t--){
		scanf("%d",&n);
		int h=1,i=0;
		for(i=0;i<=n;i++){
			if(i%2!=0) h=h*2;
			else {
				if(i==0) h=h+0;
				else h=h+1;}
		}
		printf("%d\n",h);
		
	}
	return 0;
	}
	
