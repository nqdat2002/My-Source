t = int(input())
while t > 0:
    t -= 1
    n, m = map(int, input().split())
    cs = int(n / m)
    print(cs * cs)
