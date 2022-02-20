#include<iostream>
//thamkhao
using namespace std;
int main() {
    short int a{},b{},count{};
    cin>>a>>b;
    while(b-->a)
        if(b%3==0 && b!=a) {
        	cout<<b<<' ';
            count++;
        }
   	if(count==0)
        cout<<"NOT FOUND"<<endl;
}