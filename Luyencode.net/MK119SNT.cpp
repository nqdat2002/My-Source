#include <bits/stdc++.h>
#include<math.h>
using namespace std;
const int LIM = 2e8;
bitset<LIM> isPrime;
vector<int> prime;
void sieve(int n = LIM)
{
    isPrime[2] = true;
    prime.assign(1, 2);
    int sqrtn = sqrt(n);
    for (int i = 3; i <= n; i += 2) isPrime.set(i);
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
            if (i > sqrtn) continue;
            for (int j = i * i; j <= n; j += 2 * i)
                isPrime.reset(j);
        }
    }
}

int main()
{
    sieve();
    int q;
   	cin>>q;
   	while(q--){
        int l, r;
        cin >> l >> r;

        if (l > r)
        {
            cout << 0 << '\n';
            continue;
        }
        int p1 = lower_bound(prime.begin(), prime.end(), l) - prime.begin();
        int p2 = upper_bound(prime.begin(), prime.end(), r) - prime.begin();
        cout << p2 - p1 << '\n';
    }
    return 0;
}
