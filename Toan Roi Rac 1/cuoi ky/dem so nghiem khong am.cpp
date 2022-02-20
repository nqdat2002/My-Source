#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
int main(){
    res.clear();
    int cnt = 0;
    for(int x1 = 2; x1 <= 15; x1 ++){                                       // x1
        for(int x2 = 1; x2 <= 15; x2 ++){                                   // x2
            for(int x3 = 3; x3 <= 15; x3 ++){                               // x3
              //  for(int x4 = 0; x4 <= 9; x4 ++){                           // x4
                  //  for(int x5 = 0; x5 <= 9; x5 ++){                       // x5
                       // for(int x6 = 0; x6 <= 9; x6 ++){                   // x6
                            //for(int x7 = 0; x7 <= 9; x7++){
                                //for(int x8 = 0; x8 <= 9; x8++){
                                   // for(int x9 = 1; x9<=9;x9++ )
                                        if(x1 + x2 + x3 == 15){
                                            vector<int> c;
                                            c.push_back(x1);
                                            c.push_back(x2);
                                            c.push_back(x3);
                                         //   c.push_back(x4);
                                         //   c.push_back(x5);
                                         //   c.push_back(x6);
                                         //   c.push_back(x7);
                                         //   c.push_back(x8);
                                          //  c.push_back(x9);
                                            res.push_back(c);
                                            cnt ++;
                                        }
                                    }
                            }
                        }
      //              }
   //             }
   //         }
  //      }
 //   }
    int len = res.size();
    cout << len << endl;
    cout << cnt << endl;
    return 0;
}