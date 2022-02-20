#include<stdio.h>
#include<string.h>
int main(){
	int a,b,i=0,j=0;
	scanf("%d%d",&a,&b);
	int x=a,y=b;
/*	char s1[100];
	char s2[100];
	while(b>0){
		s1[i++]=x+48;
		b--;
	}
	while(a>0){
		s2[j++]=y+48;
		a--;
	}
	if(s1[0]<s2[0]) printf("%s",s1);
	else printf("%s",s2);*/
	if(a<b){
		for(i=0;i<b;i++){
			printf("%d",a);
		}
	}
	else{
		for(i=0;i<a;i++){
			printf("%d",b);
		}
	}
}
