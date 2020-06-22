case = int(input())

for _ in range(case):
    a, b = map(int, input().split())
    a = a % 10

    if a == 0:
        print(10)
    elif a == 1 or a == 5 or a == 6:
        print(a)
    elif a == 4 or a == 9:
        b = b % 2
        if b == 1:
            print(a)
        else:
            print(a * a % 10)
    else:
        b = b % 4
        if b == 0:
            print(pow(a, 4) % 10)
        else:
            print(pow(a, b) % 10)
