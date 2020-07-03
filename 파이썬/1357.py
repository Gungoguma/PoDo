a, b = map(str, input().split())

a = int(a[::-1])
b = int(b[::-1])
c = str(a + b)[::-1]

print(int(c))
