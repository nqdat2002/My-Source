#include <bits/stdc++.h>
using namespace std;
int v[30];
void Print(int v[], int d, int c, string msg = ""){
	cout << msg;
	for(int i = d; i <= c; i ++)
		cout << v[i] << " ";
}// hau K dat duoc tai dong i
bool GoodPlace(int k, int i){
	for(int j = 1; j < k; j ++){
		if(v[j] == i || abs(v[j]- i) == k - j)
			return false;
	}
	return true;
}
// tim dong dat hau K
int Find(int k, int n){
	for(int i = v[k] + 1; i <= n; i ++){
		if(GoodPlace(k, i)) return i;
	}
	return 0;
}
void Queens(int n){
	memset(v, 0, sizeof(v));
	int k = 1;
//	int counter = 0;
	cout << "\n" << n << " Queens: ";
	while(true){
		if(k < 1){
			// gia sai
//			if(counter == 0){ 
				cout << "\n No Solution. ";
				return;
//			}
//			else{
//				cout << "\n Total " << counter << "solution";
//			}
		}
		if(k > n){
//			counter ++;

			cout << "\n Solution. "; //<< counter << ": \n";
			Print(v, 1, n);
			return;
//			v[k--] = 0;
		}
		v[k] = Find(k, n);
		if(v[k] > 0) k++;
		else k --;
	}
}
void Test(){
	for(int n = 1; n < 20; n ++){
		Queens(n);
		cout << endl;
	}
}
int main(){
	cout <<"Solution: \n";
	Test();

	return 0;
}