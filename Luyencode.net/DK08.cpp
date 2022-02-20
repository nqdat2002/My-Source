#include<stdio.h>
int main(){
	float a, b;
	char c;
	scanf("%f %c %f", &a, &c, &b);
	switch(c)
	{
		case '+': printf("%.2f", a+b); break;
		case '-': printf("%.2f", a-b); break;
		case '*': printf("%.2f", a*b); break;
		case '/':
			if(b==0)
				printf("Math Error");
			else
				printf("%.2f", a/b);
			break;
	}
	return 0;
}
