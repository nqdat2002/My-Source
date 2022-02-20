#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main(){
	int T;
	cin>>T;
	int M[T];
	stack<int> stack;
	for(int i=0;i<T;i++)
	{
		cin>>M[T];
		if(M[T]==1)
		{
			int tmp;
			cin>>tmp;
			stack.push(tmp);
		}
		else if(M[T]==2)
		{
			if(stack.empty()!=1)
			{
				stack.pop();
			}
		}
		else if(M[T]==3)
		{
			if(stack.empty()!=1)
			{
				cout<<stack.top();
				cout<<endl;
			}
			else
			{
				cout<<"Empty!"<<endl;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}
