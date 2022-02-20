#include<stdio.h>
int main() {
	int n, a[100000];
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	int max=a[0], min=a[0];
	for (int i=1; i<n; i++) {
		if (max<a[i]) max=a[i];
		if (min>a[i]) min=a[i];
	}
	printf("%d",max-min+1-n);
	return 0;
}
