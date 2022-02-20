#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
int n = s.size();
int a[10000];
for (int i = 0; i < n; i++)
{
a[s[i]]++;
}
for (int i = 0; i < n; i++)
{
if (a[s[i]] != 0)
{
cout << s[i];
a[s[i]] = 0;
}
}
}
