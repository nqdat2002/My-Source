n,m = map(int,input().split())
A = list(map(int,input().split()))
for _ in range(m):
    x,y = map(int,input().split())
    print(sum(A[x-1:y]))
