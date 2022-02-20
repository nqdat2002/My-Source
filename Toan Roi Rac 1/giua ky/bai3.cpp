#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
int main(){
    res.clear();
    int cnt = 0;
    for(int i = 5; i <= 6; i ++){
        for(int j = 6; j <= 8; j ++){
            for(int k = 0; k <= 9; k ++){
                for(int l = 0; l <= 9; l ++){
                    for(int m = 0; m <= 9; m ++){
                        for(int n = 0; n <= 9; n ++){
                            if(i + j + k + l + m + n == 15){
                                vector<int> c;
                                c.push_back(i);
                                c.push_back(j);
                                c.push_back(k);
                                c.push_back(l);
                                c.push_back(m);
                                c.push_back(n);
                                res.push_back(c);
                                cnt ++;
                            }
                        }
                    }
                }
            }
        }
    }
    int len = res.size();
    cout << len << endl;
    for(int i = 0; i < len; i ++){
        int l = res[i].size();
        for(int j = 0; j < l; j ++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    cout << cnt << endl;
    return 0;
}