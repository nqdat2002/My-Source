import math
t = int(input())
i = 1
while i <= t:
  n = int(input())
  a = math.factorial(2*n)//(math.factorial(n+1)*math.factorial(n))
  print(a)
  i = i + 1;