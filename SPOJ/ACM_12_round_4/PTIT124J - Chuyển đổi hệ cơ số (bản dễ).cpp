#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const map<string, int> threebitBin = {{"000", 0}, {"001", 1}, {"010", 2}, {"011", 3},  
									  {"100", 4}, {"101", 5}, {"110", 6}, {"111", 7} };

string BinToOct(string binz){
	while(binz.size() % 3 != 0) binz = "0" + binz;
	string r = "";
	for(int i = 0; i < binz.size(); i += 3){
		string tp = binz.substr(i, 3);
		if(threebitBin.find(tp) != threebitBin.end()){
			r += to_string(threebitBin.find(tp)->second);
		}
	}
	return r;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    while(t--){
        string s; cin >> s;
        cout << BinToOct(s) << endl;

    }
    return 0;
}
