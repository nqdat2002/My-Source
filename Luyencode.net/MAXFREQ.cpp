#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005],d[100005];
int n;
int i,j;
void nhap(){
	cin>>n;
	for(i=0;i<n;i++){
	 cin>>a[i];
	}
	for(i=0;i<n;i++){
	 b[i]=1;
	}
}
void dem(){
	int k=0,h=0;
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
	//	printf("%d %d\n",a[i],count);
			c[k]=a[i];
			d[k]=count;	
			k++;
		}
	}
	int max=d[0];
	int t=c[0];
	for(i=1;i<k;i++){
		if(d[i]>max){
		max=d[i];
		t=c[i];
		}
	}
	cout<<t<<' '<<max;
}
int main(){
	nhap();
	dem();
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[100000], b[100000];
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    int max1=a[0];
    int min1=a[0];
    for (int i=1; i<n; ++i) {
    	if (max1<a[i]) max1=a[i];
    	if (min1>a[i]) min1=a[i];
	}
	for (int i=min1; i<=max1; ++i) {
		b[i]=0;
	}
	for (int i=0; i<n; ++i) {
		b[a[i]]+=1;
	}
	int max2=0, z;
	for (int i=0; i<n; ++i) {
		if (max2<b[a[i]]) {
			max2=b[a[i]];
			z=a[i];
		}
	}
	cout << z << " " << max2;
    return 0;
}
