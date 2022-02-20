#include<stdio.h>
#include<math.h>
int main(){
		int S,a;
		scanf("%d%d",&a,&S);
		float h=2*S/a;
		int x=(int)h;
		if(x*a/2>=S) printf("%d",x);
		else printf("%d",x+1);
	
}
