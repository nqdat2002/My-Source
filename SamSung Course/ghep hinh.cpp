#include <bits/stdc++.h>
using namespace std;
bool check(pair<int,int> p[]){
	if(p[0].first == p[1].first && p[1].first == p[2].first)
		return (p[0].second + p[1].second + p[2].second == p[0].first);
	int S = 0, t = p[0].first - p[0].second;
	for(int i = 1; i <= 2; i ++){
		if(t == p[i].second) S += p[i].first;
		else if(t == p[i].first) S += p[i].second;
		else return false;
	}
	if(S == p[0].first) return 1;
	return 0;
}
void SwapP(pair<int, int> p[]){
	for(int i = 0; i < 3; i ++)
		if(p[i].second > p[i].first) 
			swap(p[i].first, p[i].second);
	for(int i = 0; i < 2; i ++){
		for(int j = i + 1; j < 3; j ++)
			if(p[i].first < p[j].first) 
				swap(p[i], p[j]);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		pair<int, int> p[3];
		for(int i = 0; i < 3; i ++)
			cin >> p[i].first >> p[i].second;	
		SwapP(p);
		if(check(p)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

