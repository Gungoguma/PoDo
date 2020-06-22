a = int(input())

for _ in range(a):
    num = list(map(str, input().split()))
    sum = 0
    for i in range(len(num)):
        if i == 0:
            sum = float(num[i])
        elif num[i] == "@":
            sum = sum * 3
        elif num[i] == "%":
            sum = sum + 5
        elif num[i] == "#":
            sum = sum - 7
    print("%.2f" % sum)