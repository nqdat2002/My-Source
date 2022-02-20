import math as m
L, R = map(int, input().split())
ans = m.floor(m.sqrt(R))-m.ceil(m.sqrt(L))+1
if m.sqrt(R) == int(m.sqrt(R)):
    ans -= 1
if m.sqrt(L) == int(m.sqrt(L)):
    ans -= 1
print(ans)