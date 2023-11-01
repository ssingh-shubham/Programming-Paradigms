def reverse_integer(n):
    return int(str(n)[::-1])

num = int(input("Enter an integer: "))
reversed_num = reverse_integer(num)
print("Reverse:", reversed_num)
