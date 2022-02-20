#include<stdio.h>
#include<math.h>
#define cst 100
int main() {
    int a[10];
    int i,j,k;
    for(i=0; i<10 ;i++){
        scanf("%d",&a[i]);
    }
    int  max1=0,min1=0,min2,max2;
    i=0;
    do{
        min1+=a[i];
        i++;
    }
	while(i<10&&min1<=cst);
    max1=min1;
    min1 =min1-a[i-1];
    min2= abs(cst-min1);
    max2=abs(cst-max1);
    for(j=1;j<10;j++){
        int tong=0;
        i=j;
        do{
            tong+=a[i];
            i++;
        }
		while(tong<=cst&&i<10);
        if(abs(cst-tong)<max2){
            max2= abs(cst-tong);
            max1=tong;
        }
        tong=tong-a[i-1];
        if(abs(cst-tong)<min2){
            min2= abs(cst-tong);
            min1=tong;
        } 
    }
    if(abs(cst-max1)<=abs(cst-min1))
    	printf("%d",max1);
	else
        printf("%d",min1);
	return 0;
}
