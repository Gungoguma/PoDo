for i in range(1000, 10000):
    # 10진수
    temp = i
    sum_10 = 0
    while temp != 0:
        sum_10 = sum_10 + temp % 10
        temp = temp // 10
    # 12진수
    temp = i
    sum_12 = 0
    while temp != 0:
        sum_12 = sum_12 + temp % 12
        temp = temp // 12

    # 16진수
    temp = i
    sum_16 = 0
    while temp != 0:
        sum_16 = sum_16 + temp % 16
        temp = temp // 16

    if sum_10 == sum_12 == sum_16:
        print(i)