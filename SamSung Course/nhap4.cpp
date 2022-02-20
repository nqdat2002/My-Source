#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <iterator>
#include <set>
using namespace std; 
int main(){ 
	int n, m; cin >> n >> m;
    vector<int> v1(n);	for(int i = 0; i < n; i ++) cin >> v1[i]; 
    vector<int> v2(m);	for(int i = 0; i < m; i ++) cin >> v2[i]; 
    sort(v1.begin(), v1.end()) ; 
    sort(v2.begin(), v2.end()) ;
    vector<int> v_intersection ;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v_intersection));
	sort(v_intersection.begin(), v_intersection.end());
    for (int i = 0; i < v_intersection.size(); i ++) 
		cout  << v_intersection[i] <<  ' ' ; 
}
