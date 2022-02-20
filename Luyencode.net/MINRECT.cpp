#include<stdio.h>
#include<math.h>
double kc(int a,int b,int c,int d){
	return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int e=a;
	int f=d;
	double d1=kc(a,b,e,f);
	double d2=kc(e,f,c,d);
	printf("%0.f",d1*d2);
}
