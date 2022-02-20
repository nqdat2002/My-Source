#include<bits/stdc++.h>
using namespace std;
int a[105],b[105];
int n,i,j,c[105];
void xuly(){
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		b[i]=1;
	}
	int h=0;
	for(i=0;i<n;i++){
		int count=1;
		if(b[i]){
			b[i]=0;
			for(j=1+i;j<n;j++){
				if(a[j]==a[i]) {
					count++;
					b[j]=0;
				}
			}	
		c[h]=count;
		h++;	
		}
	}
	int dem=0;
	for(i=0;i<h;i++){
		if(c[i]%2==0) dem+=c[i]/2;
		else if(c[i]>1&&c[i]%2!=0) dem+=(c[i]-1)/2;
	}
	cout << dem;
}
int main(){
	xuly();
	return 0;
}
