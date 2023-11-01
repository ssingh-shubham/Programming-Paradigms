def generate_pascals_triangle(num_rows):
    triangle = []

    for i in range(num_rows):
        row = []
        for j in range(i + 1):
            if j == 0 or j == i:
                row.append(1)
            else:
                row.append(triangle[i - 1][j - 1] + triangle[i - 1][j])
        triangle.append(row)

    return triangle

def print_pascals_triangle(triangle):
    max_width = len(" ".join(map(str, triangle[-1])))
    for row in triangle:
        print(" ".join(map(str, row)).center(max_width))

if __name__ == "__main__":
    try:
        num_rows = int(input("Enter the number of rows for Pascal's Triangle: "))
        if num_rows < 1:
            print("Please enter a positive integer.")
        else:
            pascals_triangle = generate_pascals_triangle(num_rows)
            print("\nPascal's Triangle:")
            print_pascals_triangle(pascals_triangle)
    except ValueError:
        print("Invalid input. Please enter a positive integer.")
