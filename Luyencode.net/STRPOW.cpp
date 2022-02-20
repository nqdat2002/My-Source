#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	char s[100000];
    char a[100000];
    char t[100000];
    int k,l;
    cin.getline(s,100000);
    cin.getline(t,100000);
    cin >> k;
    for(int i=1;i<=k;i++){
       strcat(a,s);
    }
    l = strcmp(a,t);
    if(l == 0)
   	 cout << "YES";
    else 
  	  cout << "NO";
    return 0;
}
