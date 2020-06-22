a = int(input())
avg = 0
Max = 0
inArr = list(map(float, input().split()))
for i in range(a):
    if Max < inArr[i]:
        Max = inArr[i]
for i in range(a):
    inArr[i] = inArr[i] / Max * 100.0
    avg += inArr[i]

print(round(avg / a, 2))
