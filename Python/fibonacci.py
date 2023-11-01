def fibonacci_sequence(n):
    fib_sequence = []
    a, b = 0, 1

    for _ in range(n):
        fib_sequence.append(a)
        a, b = b, a + b

    return fib_sequence

try:
    num_terms = int(input("Enter the number of terms for the Fibonacci sequence: "))

    if num_terms <= 0:
        print("Please enter a positive integer.")
    else:
        fibonacci_sequence_list = fibonacci_sequence(num_terms)
        print("Fibonacci Sequence:")
        print(fibonacci_sequence_list)
except ValueError:
    print("Invalid input. Please enter a positive integer.")
