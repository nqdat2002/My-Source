n = int(input().strip())
arr = []
for _ in range(n):
    line = input().strip()
    arr.append(line)

for item in arr:
    print('{}'.format(int(item, base=16)))
    #jimmyellison