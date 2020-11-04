problem = int(input())
num = map(int, input().split())
for i in num:
    sumNum = 0
    for j in range(i+1):
        if j % 3 == 0 or j % 7 == 0:
            sumNum = sumNum + j
    print(sumNum, sep='\n')

# 시간 초과??