def sosanh(a, b):
    if a > b:
        return print('>')
    elif a < b:
        return print('<')
    else:
        return print('=')
#hello0404

a, b, c = map(int, input().split())
if c%2==0:
    sosanh(abs(a), abs(b))
else:
    sosanh(a,b)