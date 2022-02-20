#include <bits/stdc++.h>
using namespace std;

#define ll long long

int A , B , m = 0, x[10] , res[1500];

int len( int x )
{
	string s = to_string(x);
	return s.length();
}

bool nt( int so )
{
	if( so < 2 ) return false;
	for(int i = 2; i * i <= so ; ++i)
	{
		if( so % i == 0 )
		{
			return false;
		}
	} 
	return true;
}

void _printf(int n)
{
	int so = 0;
	for(int i = 1; i <= n; ++i)
	{
		so = so * 10 + x[i];
	}
	if( nt(so) )
	{
		m++;
		res[m] = so;
	}
}

void cr_nt(int i , int n)
{
	int start , k;
	if(i == 1) 
	{
		start = 1;
		k = 2;
	} else {
		start = 0;
		k = 1;
	}
	for(int j = start; j < 10; j += k)
	{
		x[i] = j;
		x[n-i+1] = j;
		if( i >= n / 2 + n % 2) 
		{
			_printf(n);
		} else {
			cr_nt(i + 1 , n);
		}
	}
}

void createArray(int l , int r)
{
	res[0] = 2;
	for(int i = l; i <= r; ++i) 
	{
		cr_nt(1 , i);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> A >> B;
	createArray(1 , 8);
    bool found = false;
	for(int i = 0; i <= m; ++i)
	{
		if( A <= res[i] && res[i] <= B )
		{
            found =  true;
			cout << res[i] << endl;
		}
	}
    if( found == false ) cout << 0;
	return 0;
}