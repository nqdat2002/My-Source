#include<iostream>
#include<string> 
using namespace std; 
int chuyen5(int a){
	int s=0;
	int x[8];
	int i=0;
	while(a>0){
		x[i]=a%10;
		a=a/10;
		i++;
	}
	i--;
	for(int j=i;j>=0;j--){
		if(x[j]==6) x[j]=5;
		s=s*10+x[j];
	}
	return s;
} 
int chuyen6(int a){
	int s=0;
	int x[8];
	int i=0;
	while(a>0){
		x[i]=a%10;
		a=a/10;
		i++;
	}
	i--;
	for(int j=i;j>=0;j--){
		if(x[j]==5) x[j]=6;
		s=s*10+x[j];
	}
	return s;
} 
int main() { 
		int a,b; 
		cin>>a>>b;
		int min=0,max=0;
		min=chuyen5(a)+chuyen5(b);
		max=chuyen6(a)+chuyen6(b); 
		cout<<min<<" "<<max<<endl; 
	return 0; 
}
