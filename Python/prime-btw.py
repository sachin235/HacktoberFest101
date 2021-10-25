def find_prime(n, m):
    if n > m:
        small = m
        big = n
    else:
        small = n
        big = m
    for i in range(small, big+1):
        if i == 1:
            continue
        flag = True
        for j in range(2, i):
            if i % j == 0:
                flag = False
                break
        if flag:
            print(i, end="\t")


a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

print("The prime numbers are: ", end="")
find_prime(a, b)
