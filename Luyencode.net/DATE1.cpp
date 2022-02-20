#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    unsigned int ngay, thang = 1, nam;
    cin >> ngay >> nam;
    int i = 1;
    int tam = 1;
    if((nam % 400 == 0) || (nam % 100 != 0 && nam % 4 == 0)){
        while(tam <= ngay){
            if(i == 31){
                if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
                    thang++;
                    i = 0;
                }
            }
            else if(i == 30){
                if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
                    thang++;
                    i = 0;
            	}
            }
            else if(i == 29 && thang == 2){
                thang++;
                i = 0;
            }
            i++;
            tam++;
        }
    }
    else{
        while(tam <= ngay){
            if(i == 31){
                if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
                    thang++;
                    i = 0;
                }
            }
            else if(i == 30){
                if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
                    thang++;
                    i = 0;
                }
            }
            else if(i == 28 && thang == 2){
                thang++;
                i = 0;
        	}
            i++;
            tam++;
        }
    }
    cout << i - 1 << " " << thang;
    return 0;
}
