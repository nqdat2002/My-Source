#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool P(long long n){ 
    if (n < 2) 
        return 0; 
    if (n <= 3) 
        return 1; 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
    return 1; 
} 
int main(){
		long long n,m;
		scanf("%lld",&m);
		int count=0;
		for(int i=1;i<=sqrt(m);i++){
			if(P(i))	count++;
		}
		printf("%d\n",count);
	
}
