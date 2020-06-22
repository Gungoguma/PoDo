a = int(input())
good = {}
for _ in range(a):
    name, go = map(str, input().split())
    if go == "enter":
        good[name] = 1
    else:
        del good[name]

good = sorted(good.keys(), reverse=1)
print('\n'.join(good))
