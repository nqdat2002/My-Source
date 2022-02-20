#include<iostream> 
using namespace std; 
bool checkchange(int n){  
	int du,x=n;
	int res = 0;
	while(n != 0){ 
		du = n % 10; 
		res = res * 10 + du;
		n = n / 10; 
	} 
	if(x==res) return true;
    else return false;
} 
int main(){ 
	int n, arr[100000]; 
	cin >> n; 
	for(int i = 1; i <= n; i++){ 
		cin >> arr[i];
	}   
	for(int i = 1; i <= n; i++){ 
		if(checkchange(arr[i])){ 
			cout << arr[i] << " ";
		}
	}  
}