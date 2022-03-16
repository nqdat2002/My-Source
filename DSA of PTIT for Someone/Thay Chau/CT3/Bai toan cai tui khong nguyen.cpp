#include <bits/stdc++.h>
// Geeksforgeeks
using namespace std;
struct Item {
    int value, weight;
};
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
double fractionalKnapsack(int W, struct Item arr[], int n){
    sort(arr, arr + n, cmp);
    int curWeight = 0;
    double finalvalue = 0.0;
    for (int i = 0; i < n; i++) {
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else {
            int remain = W - curWeight;
            finalvalue += arr[i].value
                          * ((double)remain
                             / (double)arr[i].weight);
            break;
        }
    }
    return finalvalue;
}
int main(){
    int t; cin >> t;
    while(t--){
    	int n, W; cin >> n >> W;
	    Item a[n];
	    for(int i = 0; i < n; ++i) cin >> a[i].value >> a[i].weight;
	    cout << fixed << setprecision(2) << fractionalKnapsack(W, a, n) << endl;
	}
    return 0;
}
