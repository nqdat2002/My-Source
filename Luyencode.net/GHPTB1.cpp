#include<stdio.h>
int main(){
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f); 
	float Det=a*e-d*b;
	float Dx=c*e-f*b;
	float Dy=a*f-d*c;
	if(Det==0){
		if(Dx==0&&Dy==0) printf("VOSONGHIEM");
		else printf("VONGHIEM");
	}
	else{
		float x=Dx/Det;
		float y=Dy/Det;
		if(y==-0.00) printf("%.2f 0.00",x);
		else{
			if(x==-0.00) printf("0.00 %.2f",y);
			else printf("%.2f %.2f",x,y);
		}
	}
	return 0;
}
