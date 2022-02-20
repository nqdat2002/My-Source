#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		int i=0;
		scanf("%d%d%d",&a,&b,&c);
		if(a==b&&c>a||a==b&&c<a||a==b&&b==c) printf("Mouse C\n");
		else if(a<b&&b<c||a<b&&b==c) printf("Cat B\n");
		else if(c<a&&a<b||a==c&&a<b) printf("Cat A\n");
		else if(c<b&&b<a||b==c&&b<a) printf("Cat B\n");
		else if(b<a&&a<c||b<a&&a==c) printf("Cat A\n");
		else if(a<c&&c<b){
			if(c-a==b-c) printf("Mouse C\n");
			else if(c-a>b-c) printf("Cat B\n");
			else printf("Cat A\n");
		}
		else if(b<c&&c<a){
			if(c-b==a-c) printf("Mouse C\n");
			else if(c-b>a-c) printf("Cat A\n");
			else printf("Cat B\n");
		}
		
	}		
	return 0;
}
