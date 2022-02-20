#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a>=1&&a<=31&&b>=1&&b<=12&&c>=1990&&c<=3000) printf("TRUE\n");
		else printf("FALSE\n");
		
	}
}