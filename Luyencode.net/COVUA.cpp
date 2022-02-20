#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[100][100];
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				if(j%2==0) a[i][j]='W';
				else a[i][j]='B';
			}
		}
		else{
			for(int j=0;j<n;j++){
				if(j%2==0) a[i][j]='B';
				else a[i][j]='W';
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
