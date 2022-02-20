#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
using namespace std;
const ll MOD = 1e9+7;

int main(){
	int n;
	while(cin>>n){
		if(n <= 2)
			cout<<9<<endl;
		else if(n <= 4)
			cout<<90<<endl;
		else if(n <= 6)
			cout<<900<<endl;
		else if( n <= 8)
			cout<<9000<<endl;
		else if(n <= 10)
			cout<<90000<<endl;
		else if(n <= 12)
			cout<<900000<<endl;
		else if(n <= 14)
			cout<<9000000<<endl;
		else
			cout<<90000000<<endl;
	}
}