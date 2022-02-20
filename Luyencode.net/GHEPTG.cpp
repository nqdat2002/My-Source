#include<stdio.h>
#include<math.h>
void sapxep(int b[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
}
int main(){
	int x[4];
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&x[i]);
	}
	if(x[0]+x[1]>x[2]&&x[2]+x[1]>x[0]&&x[2]+x[0]>x[1]) printf("0");
	else{
		sapxep(x,3);
	//	for(i=0;i<3;i++){
	//		printf("%d ",x[i]);
	//	}
		printf("%ld",(long)x[2]+1-x[1]-x[0]);
	}

}
