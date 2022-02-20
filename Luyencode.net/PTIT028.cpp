#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ( ) {
	double a;
	scanf("%lf",&a);
	if (abs(a)<=10000){
		if (a>0)
			printf("%.lf %.lf",trunc(a),ceil(a+0.000001));
		else if (a<-1)
			printf("%.lf %.lf",ceil(a)-1,trunc(a));
		else printf("%.lf %.lf",ceil(a)-1,0);
	}
	return 0;
}
