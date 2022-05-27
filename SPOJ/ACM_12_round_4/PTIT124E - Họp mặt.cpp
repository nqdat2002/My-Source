#include <iostream>
#include <vector>
using namespace std;
 
int N, M, K;
vector <int> person;
vector <int> road[1003];
int count[1003];
void read ()
{
	cin>>K>>N>>M;
	int ps;
	for (int i=1; i<=K; i++)
	{
		cin>>ps;
		person.push_back(ps);
	}
	for (int i=1; i<=M; i++)
	{
		int A, B;
		cin>>A>>B;
		road[A].push_back(B);
	}
	for (int i=1; i<=N; i++)
	{
		count[1003];
	}
}
 
int check[1003];
void init ()
{
	for (int i=1; i<=N; i++)
	{
		check[i]=0;
	}
}
 
void loang (int u)
{
	for (int i=0; i<road[u].size(); i++)
	{
		int v=road[u][i];
		if (check[v]==0)
		{
			check[v]=1;
			count[v]++;
			loang (v);
		}
	}
}
 
int main ()
{
	read ();
	for (int i=0; i<person.size(); i++)
	{
		init ();
		check[person[i]]=1;
		count[person[i]]++;
		loang (person[i]);
	}
	int answer=0;
	for (int i=1; i<=N; i++)
	{
		if (count[i]==K) answer++;
	}
	cout<<answer;
	return 0;
} 
