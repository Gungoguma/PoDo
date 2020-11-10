a = []
b = []
flag = 0
for i in range(10):
    c = int(input())
    c = c % 42
    a.append(c)

for i in a:
    if i not in b:
        b.append(i)
print(len(b))

