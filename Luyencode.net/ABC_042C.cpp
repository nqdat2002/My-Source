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
int vis[15],a[10];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1,x;i<=k;i++)
		scanf("%d",&x),vis[x]=1;
	for(int i=n;;i++){
		int a[15]={};
		int x=i,cnt=0;
		while(x){
			a[++cnt]=x%10;
			x/=10;
		}
		int ok=1;
		for(int i=1;i<=cnt;i++)
			if(vis[a[i]]){
				ok=0;
				break;
			}
		if(ok) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}

