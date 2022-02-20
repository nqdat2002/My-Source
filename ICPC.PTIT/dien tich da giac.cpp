#include<bits/stdc++.h>
using namespace std;
double Square_of_Triangle(double a1, double a2, double b1, double b2, double c1, double c2){
	double a = sqrt((a1 - b1)*(a1 - b1) + (a2 - b2)*(a2 - b2));
	double b = sqrt((a1 - c1)*(a1 - c1) + (a2 - c2)*(a2 - c2));
	double c = sqrt((c1 - b1)*(c1 - b1) + (c2 - b2)*(c2 - b2));
	return (double)0.25*sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c));	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		double arr[n][2];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 2; j++){
				cin >> arr[i][j];			
			}
		}
		double S = 0;
		for(int i = 1; i < n - 1; i ++){
			S += Square_of_Triangle(arr[0][0], arr[0][1], arr[i][0], arr[i][1], arr[i+1][0], arr[i+1][1]);
		}
		cout <<  fixed << setprecision(3) << S << endl;
	}
	return 0;
}
