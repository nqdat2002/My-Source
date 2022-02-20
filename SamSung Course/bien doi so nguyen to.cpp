#include<bits/stdc++.h>
using namespace std;
int opt[10000];
int Prime(int n){
	if(n == 2 || n == 3) return 1;
	if(n == 1 || n % 2 == 0 || n % 3 == 0){
		return 0;
	}
	if(n < 25) return 1;
	int m = sqrt(n);
	int i = 5, j = 2;
	while(i <= m){
		if(n % i == 0) 
			return 0;
		else{
			i = i + j;
			j = 6 - j;
		}
	}
	return 1;
}
void Num_to_arr(int A[5], int n){
	A[4] = n % 10;
	A[3] = ( n / 10 ) % 10;
	A[2] = (n / 100) % 10;
	A[1] = ( n / 1000) % 10;
}
int Arr_to_num(int A[5]){
	int tong = 0;
	for(int i = 1; i <= 4; i ++){
		tong = tong * 10 + A[i];
	}
	return tong;
}
int main(){
	int x, y, T; cin >> T;
	while(T--){
	cin >> x >> y;
	memset(opt, -1, sizeof(opt));
	queue<int> Q;
	Q.push(x);
	opt[x] = 0;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		int arr[5];
		{
			Num_to_arr(arr,v);
			for(int i=1;i<=9;i++){
				if(arr[1]!=i){
					arr[1]=i;
					int a=Arr_to_num(arr);
					if(Prime(a)==1){
						int temp=a;
						if(opt[temp]==-1){
							opt[temp]=opt[v]+1;
							Q.push(temp);
						}
					}
				}
			}
		}
		{
			Num_to_arr(arr, v);
			for(int i = 0; i <= 9; i ++){
				if(arr[2] != i){
					arr[2] = i;
					int a = Arr_to_num(arr);
					if(Prime(a) == 1){
					int temp = a;
						if(opt[temp] == -1){
							opt[temp] = opt[v] + 1;
							Q.push(temp);
						}
					}
				}
			}
		}
		{
			Num_to_arr(arr, v);
			for(int i = 0; i <= 9; i ++){
				if(arr[3] != i){
					arr[3] = i;
					int a = Arr_to_num(arr);
					if(Prime(a) == 1){
					int temp = a;
						if(opt[temp] == -1){
							opt[temp] = opt[v] + 1;
							Q.push(temp);
						}
					}
				}
			}
		}
		{
			Num_to_arr(arr,v);
			for(int i = 1; i <= 9; i += 2){
				if(arr[4] != i){
					arr[4] = i;
					int a = Arr_to_num(arr);
					if(Prime(a) == 1){
					int temp = a;
						if(opt[temp] == -1){
							opt[temp] = opt[v] + 1;
							Q.push(temp);
						}
					}
				}
			}
		}
	}
	cout << opt[y] << endl;
	}
	return 0;
}
