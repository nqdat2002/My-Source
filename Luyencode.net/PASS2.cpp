#include<bits/stdc++.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}

bool checkU(string n){
    for(int i=0;i<n.length();i++){

    if(n[i]<=90&&n[i]>=65){
        return true;
    }
    }
    return false;
}
bool checkL(string n){
    for(int i=0;i<n.length();i++)
    if(n[i]<=122&&n[i]>=97){
        return true;
    }
    return false;
}
bool checkNum(string n){
    for(int i=0;i<n.length();i++)
    	if(n[i]>=48 && n[i]<=57){
       	 return true;
    }
    return false;
}
int main() {
	string s;
    int n;
    cin>>n;
    while(n--){
    cin>>s;
    if(checkU(s)==true && checkL(s)==true && checkNum(s)==false || checkU(s)==true && checkL(s)==false && checkNum(s)==true || checkU(s)==false && checkL(s)==true && checkNum(s)==true)
        cout<<2+min(5, max(s.length()-5, 0)) <<" ";

	else if(checkU(s)==false && checkL(s)==true && checkNum(s)==false || checkU(s)==false && checkL(s)==false && checkNum(s)==true || checkU(s)==true&&checkL(s)==false&&checkNum(s)==false)
        cout<<1+min(5, max(s.length()-5, 0))<<" ";

	else if(checkU(s)==true&&checkL(s)==true&&checkNum(s)==true)
        cout<<5+min(5, max(s.length()-5, 0))<<" ";

    }
    return 0;
}
