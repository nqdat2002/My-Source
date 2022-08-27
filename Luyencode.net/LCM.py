maxn = 1000001
mod = 1000 * 1000 * 1000 + 7
prime = [True for i in range(maxn)]
v = []
for i in range (2, maxn):
    if prime[i] == True:
        v.append(i)
        for j in range (i * i, maxn, i):
            prime[j] = False
            
def solve():
    n = len(v)
    a = [0 for i in range(n)]
    b = [0 for i in range(n)]
    x, y = map(int, input().split())
    x -= 1
    for i in range(0, n):
        base = v[i]
        while x >= base or y >= base:
            a[i] += (x // base)
            b[i] += (y // base)
            base *= v[i]
    res = 1
    for i in range(n):
        res = res * (2 * (b[i] - a[i]) + 1) % mod
    print(res)
    
t = int(input())
while t > 0:
    t -= 1
    solve()
