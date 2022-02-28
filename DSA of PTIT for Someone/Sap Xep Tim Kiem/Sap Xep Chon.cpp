#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[], int n){
	int index;
    for(int i = 0; i < n - 1; i++){
        index = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[index]) 
				index = j;
        }
        swap(a[i], a[index]);
        cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j ++)
		    cout << a[j] << " ";
		cout << endl;
    }
}
main(){
    int a[100], n;
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    sapxep(a, n);
    return 0;
}
