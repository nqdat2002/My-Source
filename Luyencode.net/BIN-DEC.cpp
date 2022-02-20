#include<stdio.h>
#include<math.h>
#include<string.h>
unsigned long long chuyen(char s[]){
    unsigned long long  t = 0;
	int j = 0;
	for(int i=strlen(s)-2;i>=0;i--){
		t += (s[i]-48)*pow(2,j);
		j++;
	}
	return t;
}
int main(){
	char s[100];
	long n;
	unsigned long long b[100010];
	char t;
	scanf("%ld",&n);
	scanf("%c",&t);
    for(int i=0;i<n;i++){
     	fgets(s,100,stdin);
     	b[i] = chuyen(s);
	}
	for(int i=0;i<n;i++){
		printf("%llu\n",b[i]);
	}
	}
