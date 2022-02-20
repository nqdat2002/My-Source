#include <stdio.h>
void printNhiPhan(long long int x){
	if(x==0)
		return;
	else{
	long long int r = x%2;
		printNhiPhan(x/2);
		printf("%lli", r);
	}
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{		
	long long int n;

		scanf("%lli", &n);
		printNhiPhan(n);
		printf("\n");
	}
}
