string = input()

for i in range(len(string)):
    print(string[i], end="")
    if (i + 1) % 10 == 0:
        print("\n", end="")