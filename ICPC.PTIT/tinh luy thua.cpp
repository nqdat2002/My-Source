// Designed by Nguyen Hoang Phuc
// a.k.a Linh's servant - Ken
// En Taro Adun! - TemplarAssasin a.k.a Zeratul

// Libraries

#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/math/constants/constants.hpp>
// #include <boost/cstdint.hpp>

// Defines
	
	// Typedefs
	
	#define ll long long
	#define ull unsigned long long
	#define pb push_back
	#define eb emplace_back
	#define cl(C) C.clear()
	#define cint cpp_int
	#define all(C) C.begin(), C.end()
	#define Begin() int N; cin>>N; cin.ignore(); while(N--)
	
	//Commands
	
		// Loops
		
		#define FOR(i,a,b) for (int i=a; i<=b; i++)
		#define FORD(i,a,b) for (int i=a; i>=b; i--)
		#define FORA(x,C) for (auto x:C)
		#define WHILE(x,y) while(cin>>x>>y)
		#define WHILEF(x,y,f) while(f>>x>>y)
		#define WHILE2(x) while(cin>>x)
		#define WHILEGL(a) while(getline(cin,a))
		#define WHILEGLF(a,f) while(getline(f,a))
		
		// Get values
		
		#define maxOf(C) max_element(C.begin(), C.end()) - C.begin()
		#define minOf(C) min_element(C.begin(), C.end()) - C.begin()
		#define ite(y,x,it) y<x>::iterator it
		
		// Clear containers
		
		#define reset(C) memset(C,0,sizeof(C))
		#define clearQueue(C, x) C = queue<x> ()
		#define Fill(C,a) fill(C.begin(), C.end(), a)
		
		// Customize containers
		
		#define SORT(C) sort(C.begin(), C.end())
		#define SORTD(C,x) sort(C.begin(), C.end(), greater<x>())
		#define SORTC(C,check) sort(C.begin(), C.end(), check)
		#define tlw(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = tolower(C[i])
		#define tup(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = toupper(C[i])
		#define Merge(C,F,K) merge(C.begin(), C.end(), F.begin(), F.end(), K.begin());
		#define Unique(C) C.erase(unique(C.begin(), C.end()), C.end())
		#define CutInHalf(C,F,x,y) y<x> F(C.begin() + C.size()/2 + 1, C.end()); C.resize(C.size()/2)
		#define revrs(C) reverse(C.begin(, C.end()))
		
		// Scan and print containers
		
		#define get(C,a) for(int i=0; i<a; i++) cin>>C[i]
		#define get2(C,a,b) for(int i=0; i<a; i++) for (int j=0; j<b; j++) cin>>C[i][j]
		#define getVector(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getVector2(C) for(int i=0; i<C.size(); i++) for (int j=0; j<C[i].size(); j++) cin>>C[i][j]
		#define getDeque(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getSet(C, a, token) for(int i=0; i<a-1; i++) { cin>>token; C.insert(token); } cin>>token; C.insert(token)
		#define print(C,a) for(int i=0; i<a; i++) cout<<C[i]<<' '
		#define printVector(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		#define printSet(C,x) for (set<x>::iterator it = C.begin(); it!= C.end(); ++it) cout<<*it<<' '
		#define printDeque(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		
		// Converts between containers
		
		#define toSet(C,x) set<x> (C.begin(), C.end())
		#define toVector(C,x) vector<x> (C.begin(), C.end())
		#define toQueue(C,x) queue<x> (C.begin(), C.end())
		#define toDeque(C,x) deque<x> (C.begin(), C.end())
		#define toList(C,x) list<x> (C.begin(), C.end())
		#define toMultiset(C,x) multiset<x> (C.begin(), C.end())
		
		// Iterators
		
		#define pointer(A,x) A<x>::iterator
		
	// Containers
	
	#define um(x,y) unordered_map<x,y> 
	#define m(x,y) map<x,y> 
	#define p(x,y) pair<x,y> 
	#define us(x) unordered_set<x> 
	#define vec(x) vector<x> 
	#define vec2(C,x,y,token) vector<vector<token> > C(x, vector<token> (y))
	#define pq(x) priority_queue<x>
	#define reverse_pq(x) priority_queue<x, vector<x>, greater<x> >
	
	// System
	
	#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#define pause() system("pause");

// Namespaces

using namespace std;
// using namespace boost::multiprecision;
// using boost::multiprecision::cpp_dec_float_50;

//===================== Your code starts HERE =====================

//struct ele
//{
//	
//};

ll M;

ll power(ll a, ll b, ll mod)
{
	if (b==0) return 1%mod;
	if (b==1) return a%mod;
	ll k = power(a,b/2,mod) % mod;
	if (b & 1) return (((k%mod)*(k%mod))%mod * (a%mod)) %mod;
	return ((k%mod) * (k%mod)) % mod;
}

//vector<p(ll,ll)> totient(ll x)
//{
//	vec(p(ll,ll)) token;
//	if (x % 2 == 0)
//	{
//		p(ll,ll) A;
//		A.first = 2;
//		A.second = 0;
//		token.pb(A);
//		while (x%2 == 0) 
//		{
//			x/=2;
//			token.back().second++;
//		}
//	}
//	for (int i=3; i <= sqrt(x); i+=2)
//	{
//		if (x % i == 0)
//		{
//			p(ll,ll) A;
//			A.first = i;
//			A.second = 0;
//			token.pb(A);
//			while(x % i == 0)
//			{
//				x /= i;
//				token.back().second++;
//			}
//		}
//	}
//	if (x >= 2)
//	{
//		p(ll,ll) A;
//		A.first = x;
//		A.second = 1;
//		token.pb(A);
//	}
//	return token;
//}

ll totient(ll n)
{
	ll result = 1;
	ll p = 3;
	if (n % 2 == 0)
	{
		n /= 2;
	}
	while (n % 2 == 0)
	{
		result *= 2;
		n/=2;
	}
	while (p*p <= n)
	{
		if (n % p == 0)
		{
			result *= (p-1);
			n /= p;
		}
		while (n % p == 0)
		{
			result *= p;
			n /= p;
		}
		p += 2;
	}
	if (n >= 2) result *= (n-1);
	return result;
}

ll power2(ll a, ll b)
{
	if (b==0) return 1%M;
	if (b==1) return a%M;
	ll k = power2(a,b/2) %M;
	if (b & 1) return (((k%M)*(k%M))%M * (a%M))%M ;
	return (k%M) * (k%M)%M;
}

ll modpow(ll p,ll z,ll b,ll c,ll m)// : # (p^z)^(b^c) mod m
{
    ll cp = 0;
    while (m % p == 0 && cp < z)
    {
    	cp += 1;
        m /= p;
	}
//	vec(p(ll,ll)) C = totient(m);
//	ll t = 1;
//	FOR(i,0,C.size()-1)
//	{
//		t = t*power2(C[i].first,C[i].second-1)*(C[i].first-1);
//	}
    ll t = totient(m);
    ll exponent = ((power(b,c,t)*z)%t + t - (cp%t))%t;
//    cout << p << " " << z << " " << b << " " << c << " " << exponent << endl;
    return power2(p, cp)*power(p, exponent, m);
}

int main()
{
//	vec(p(ll,ll)) C;
	faster();
	Begin()
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d>>M;
		a %= M;
		ll N = totient(M);
		b %= N;
		c %= N;
		ll K = totient(N);
		d %= K;
		if (M == 1)
		{
			cout<<0<<endl;
			continue;
		}
		if (b == 0)
		{
			cout<<1%M<<endl;
			continue;
		}
		if (d == 0)
		{
			c = 1;
			d = 1;
		}
		if (c == 0)
		{
			cout<<1%M<<endl;
			continue;
		}
		if (a == 0)
		{
			cout<<0<<endl;
			continue;
		}
		ll result = 1;
		ll p = 3;
		ll cp = 0;
		while (a % 2 == 0)
		{
			a /= 2;
			cp++;
		}
		if (cp != 0)
		{
			ll temp = modpow(2,cp,c,d,M);
			result *= temp;
			result %= M;
		}
		while(p * p <= a)
		{
			cp = 0;
			while (a % p == 0)
			{
				a /= p;
				cp++;
			}
			if (cp != 0)
			{
				ll temp = modpow(p,cp,c,d,M);
				result *= temp;
				result %= M;
			}
			p+=2;
		}
		if (a >= 2)
		{
			result *= modpow(a,1,c,d,M);
		}
		ll RESULT = power(result,b,M);
		cout<<RESULT%M<<endl;
	}
}