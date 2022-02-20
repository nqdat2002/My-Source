f = [1 for i in range(0, 101)]
for i in range(2,101):
    f[i] = f[i - 1] * i
s = input().strip()
res = f[len(s)]
for x in "abcdefghijklmnopqrstuvwxyz":
    res = res // f[s.count(x)]
print(res)