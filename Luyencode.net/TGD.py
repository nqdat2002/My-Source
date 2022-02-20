n = int(input())
a = list(map(int, input().split()))
d = {}
for key in a:
    d[key] = d.get(key,0) + 1
ans = 0
for key in d:
    if d[key] > 2 and key > 0:
        x = d[key]
        ans += x*(x-1)*(x-2)//6
print(ans)