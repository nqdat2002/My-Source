t = int(input())
for i in range(t):
    print(hex(int('0b'+str(input()),2))[2:].upper())