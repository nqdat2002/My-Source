#include <iostream>
#include <string>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
typedef long long ll;
bool check(ll n){
	while(n > 0){
		ll a = n % 10;
		if(a != 2 || a != 3 || a != 5 || a != 7) 
			return false;
		n /= 10;
	}
	return true;
}

int main(){
	FileIO();
	ll arr[50001], n, cnt[50001], a = 0;
	while(cin >> n){
		if(check(n)){
			int mark = 0;
			for(int i = 0; i < a; i++) 
				if(arr[i] == n){
					cnt[i]++;
					mark = 1;
					break;
				}
			if(mark == 0){
				arr[a] = n;
				cnt[a++] = 1;
			}
		}
	}
	for(int i = 0; i < a; i++){
		cout << arr[i] << " " << cnt[i] << endl;
	}
	return 0;
}

