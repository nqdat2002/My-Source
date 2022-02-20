#include<bits/stdc++.h>
using namespace std;
bool mark = false;
void Back_tracking(int* arr, int n) {
	int i = n - 2;
	while (i >= 0 && arr[i] < arr[i + 1])
		i--;
	if (i < 0) mark = true;
	else {
		int k = n - 1;
		while (arr[k] > arr[i])
			k--;
		swap(arr[k], arr[i]);
		int left = i + 1, right = n - 1;
		while (left < right) {
			swap(arr[left], arr[right]); 
			left ++; 
			right --;
		}
	}
}
int main(){
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		int arr[1000];
		mark = false;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		Back_tracking(arr, n);
		if (mark == true)
			for (int i = n - 1; i >= 0; i--)
				cout << arr[i] << " ";
		else
			for (int i = 0; i < n; i++)
				cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
