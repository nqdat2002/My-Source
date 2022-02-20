#include <bits/stdc++.h>
using namespace std;
int n;
int output = 0;
int dem = 0;
int sum = 0;
int* arr = new int[n];

void DOEXAM( int k, int x = 0) {
	if ( n <= k ) return;
	else {
		if ( k == 0 ) {
			output = max(dem, output);
		}
		else {
			for ( int i = x; i <= x + 1; ++i ) {
				dem += arr[i];
				DOEXAM(k - 1, i + 1);
				dem -= arr[i];
			}			
		}
	}
} 
//newbie236
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i)
	{	
		sum += arr[i];
	}
	k = (k < n) ? k : n;
	for (int i = 0; i < k; ++i ) {
		output += arr[i];
	}
	DOEXAM(k);
	cout << output << "\n";
	return 0;

}
