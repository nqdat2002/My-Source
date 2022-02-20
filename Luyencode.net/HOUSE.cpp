#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int n,i,j,c= 0,t=0;
	cin>>n;
    char s[25000];
    for (i=0;i<n;i++){
        cin>>s[i];
    }
    for (i=0;i<n;i++){
        if(s[i]==s[i+1]){
            t+=1;
        }
        if(s[i]!=s[i+1]){
            c+=(t+ 1)/2;
            t=0;
        }
    }
    cout<<c ;
    return 0;
}
