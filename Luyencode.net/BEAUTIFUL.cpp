#include <stdio.h>
#include<math.h>
int dao(int n){
    int res = 0;
    while(n > 0){
        int tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return  res;
}
int main(){
  	int a,b,k;
  	scanf("%d%d%d",&a,&b,&k);
  	int x;
  	int dem=0;
   	for(x=a;x<=b;x++)
   	{
   		if(abs(x-dao(x))%k==0) dem++;
   	}
   	printf("%d",dem);
   	return 0;
   	
}