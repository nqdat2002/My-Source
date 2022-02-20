#include<stdio.h>
int main(){
	int q,n,i;
	scanf("%d",&q);
	unsigned long long T[100005];
	T[0]=1,T[1]=1,T[2]=1;
	for(i=3;i<=100000;i++){
		if(i%2!=0)
			T[i]=T[i-1]+T[i-2];
		else T[i]=T[i-1]-1;
	}
	while(q--){
		scanf("%d",&n);
		printf("%llu\n",T[n]);
	}

}
