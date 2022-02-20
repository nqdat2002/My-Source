#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	long long int t;
	while(scanf("%lli",&t)!=-1){
		int i;
		long long int b=t;
		while(t>0){
			i=t%10;
			t=t/10;
		}
		if(i==(b%10)) printf("YES\n");
		else printf("NO\n");}
		return 0;
}

