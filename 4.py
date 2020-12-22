a=  []
for x in input().split():
    a.append(int(x))

max1, max2 = a[0], a[1]
sum = a[0] + a[1]
for i in range(2, len(a)):
    if a[i] + a[i-1] > sum:
        sum = a[i] + a[i-1]
        max1, max2 = a[i], a[i-1]
print(max1, max2)
