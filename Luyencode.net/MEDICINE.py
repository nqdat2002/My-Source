str=input()
dem=0
for i in range(97,123):
    if str.count(chr(i))!=0:
        dem=dem+1
print(dem)