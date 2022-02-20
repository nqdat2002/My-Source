#include<stdio.h>
#include<math.h>
int tong(int n){ 
	if (n==1){
        return 6;
    }
    if (n==2){
        return 5;
    }
    if (n==3){
        return 4;
    }
    if (n==4){
        return 3;
    }
    if (n==5){
        return 2;
    }
    if (n==6){
        return 1;
    }
}
int main(){
	int a, b, c, sum=0;
	scanf("%d%d%d",&a,&b,&c);
	sum = tong(a)+tong(b)+tong(c);
	printf("%d",sum);
	return 0;
}
