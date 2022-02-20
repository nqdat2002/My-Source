#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool Sang(int n)
{
	bool kt[100]={false};
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(!kt[i]){
			int j;
			for(j=i;j<=n;j+=i){
				kt[j]=true;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	Sang(n);
}
