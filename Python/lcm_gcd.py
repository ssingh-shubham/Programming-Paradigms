# Function to find the GCD (Greatest Common Divisor) using Euclidean algorithm
def find_gcd(x, y):
    while y:
        x, y = y, x % y
    return x

# Function to find the LCM (Least Common Multiple)
def find_lcm(x, y):
    return x * y // find_gcd(x, y)

# Input: Get two numbers from the user
try:
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number:"))

    if num1 < 0 or num2 < 0:
        print("Please enter non-negative integers.")
    else:
        lcm = find_lcm(num1, num2)
        gcd = find_gcd(num1, num2)

        print(f"The LCM of {num1} and {num2} is {lcm}")
        print(f"The GCD of {num1} and {num2} is {gcd}")

except ValueError:
    print("Invalid input. Please enter valid integers.")
