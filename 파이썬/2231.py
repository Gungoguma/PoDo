num = int(input())
count = 0
digits = num
while 1:
    digits = int(digits / 10)
    count = count + 1
    if digits == 0:
        break
digitsSum = num - count * 9
for i in range(digitsSum, num):
    output = i
    digits = i
    Sum = i
    count = 0
    flag = 0
    while digits != 0:
        digits = int(digits / 10)
        count = count + 1
    for j in range(0, count):
        test = int(i % 10)
        i = int(i / 10)
        Sum = Sum + test
    if Sum == num:
        print(output)
        flag = 1
        break
if flag == 0:
    print(0)