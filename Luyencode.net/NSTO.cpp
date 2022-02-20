#include <iostream>
using namespace std;
int main(){
    int res,n,sum;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
		cin >> a[i];
    res = -1;
    for (int i=0;i<n;i++){
       	for(int j=i;j<n;j++){
           	sum=0;
           	
           	for (int k=j;k>=i;k--)
               	sum+=a[k];
               	
           	if ( (sum >= 0) ){
			   	int tmp = j-i+1;
			   	
              	if(tmp > res)
					res = tmp;
            }
       	}
   	}
  	cout << res;
  	return 0;
}
