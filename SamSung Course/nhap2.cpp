#include<bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int main(){
	ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		double arr[1005], arr2[1005];
		int tmp[1005] = {0}, tmp2[1005] = {0};
		cin >> n;
		for(int i = 0; i < n; i ++)
			cin >> arr[i] >> arr2[i];
		
		tmp[0] = 1;
		int max1;
		for(int i = 1 ; i < n; i ++){
			max1 = 0;
			for(int j = 0 ; j < i; j ++){
				if(arr[i] > arr[j])
					if(tmp[j] > max1)
						max1 = tmp[j];
				
			}
			tmp[i] = max1 + 1;
		}
		int len1 = 0;
		for(int i = 0 ; i < n ; i ++){
			if(tmp[i] > len1)
			len1 = tmp[i];
		}



		tmp2[0] = 1;
		int max2;
		for(int i = 1 ; i < n; i ++){
			max2 = 0;
			for(int j = 0 ; j < i; j ++){
				if(arr2[i] < arr2[j])
					if(tmp2[j] > max2)
						max2 = tmp2[j];
				
			}
			tmp2[i] = max2 + 1;
		}
		int len2 = 0;
		for(int i = 0 ; i < n ; i ++){
			if(tmp2[i] > len2)
			len2 = tmp2[i];
		}
		cout << min(len1, len2) << endl;
	}
	return 0; 
}