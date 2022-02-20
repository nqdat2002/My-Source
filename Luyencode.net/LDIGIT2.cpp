#include<stdio.h>
int tach(int n){
	int x=n%10;
	return x;
}
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	if(n==0) printf("1");
	else{
		if(tach(a)==0) printf("0");
		else if(tach(a)==1) printf("1");
		else if(tach(a)==5) printf("5");
		else if(tach(a)==6) printf("6");
		else if(tach(a)==4){
			if(n%2==1) printf("4");
			else printf("6");
		}
		else if(tach(a)==3){
			if(n%4==1) printf("3");
			else if(n%4==2) printf("9");
			else if(n%4==3) printf("7");
			else printf("1");
		}
		else if(tach(a)==7){
			if(n%4==1) printf("7");
			else if(n%4==2) printf("9");
			else if(n%4==3) printf("2");
			else printf("1");
		}
		else if(tach(a)==9){
			if(n%2==1) printf("9");
			else printf("1");
		}
		else if(tach(a)==2){
			if(n%4==1) printf("2");
			else if(n%4==2) printf("4");
			else if(n%4==3) printf("8");
			else printf("6");
		}
		else if(tach(a)==8){
			if(n%4==1) printf("8");
			else if(n%4==2) printf("4");
			else if(n%4==3) printf("2");
			else printf("6");
		}
	}
}
