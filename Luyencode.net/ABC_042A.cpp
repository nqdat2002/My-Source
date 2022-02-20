#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5,M=1e6+5,inf=0x3f3f3f3f,mod=1e9+7;
#define mst(a) memset(a,0,sizeof a)
#define lx x<<1
#define rx x<<1|1
#define reg register
#define PII pair<int,int>
#define fi first 
#define se second
int main(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	int cnt1=0,cnt2=0;
	for(int i=0;i<3;i++)
		if(a[i]==5) cnt1++;
		else if(a[i]==7) cnt2++;
	if(cnt1==2&&cnt2==1) puts("YES");
	else puts("NO"); 
	return 0;
}

