#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;
    string c = "abcdefghijklmnopqrstuvwxyz";
    int a[26]={0};
    while(cin >> str){
        for (int i = 0; i < str.size(); i ++)
            for (int j = 0; j < 26; j ++)
                if (str[i] == c[j]) 
					a[j] ++;
    }
    for (int i = 0;i<26;i++)
    	if (a[i] != 0)
            cout << c[i] << ":" << a[i] << endl;
	return 0;
}
