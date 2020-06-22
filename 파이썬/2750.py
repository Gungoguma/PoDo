a = []
b = int(input())
for _ in range(b):
    a.append(int(input()))
for i in range(b - 1):
    for j in range(b - 1):
        if a[j] > a[j + 1]:
            f = a[j]
            a[j] = a[j + 1]
            a[j + 1] = f
'''
array.sort()
'''

for k in range(b):
    print("{}".format(a[k]))
'''
for i in array:
    print(i)
'''
'''
print("\n".join(array))
'''