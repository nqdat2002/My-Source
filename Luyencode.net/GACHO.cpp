#include<stdio.h>
int main(){
	int c,f;
	scanf("%d%d",&c,&f); 
	float Det=2;
	float Dx=4*c-f;
	float Dy=f-2*c;
	float x=Dx/Det;
	float y=Dy/Det;
	if(x==(int)x&&x>=0&&y==(int)y&&y>=0){
		if(y==0) printf("%d 0",(int)x);
		else{
			if(x==0) printf("0 %d",(int)y);
			else printf("%d %d",(int)x,(int)y);
		}
	}
	else printf("-1");
	return 0;
}
