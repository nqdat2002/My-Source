#include<stdio.h>
int main(){
	int n;
    
	scanf("%d",&n);
    if(n>60)  return 0;
    else{
    if(n==0) printf("1");
	else if(n%4==1) printf("2");
	else if(n%4==2) printf("4");
	else if(n%4==3) printf("8");
	else printf("6");}
	
}
